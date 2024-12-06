import os
import glob
from xml.etree import ElementTree as ET

# Define the project-specific settings
settings = {
    "asn1_its": {
        "files_to_add": [("./itsAsnIncludes.c", "ClCompile")]
    },
    "asn1_its_r2": {
        "files_to_add": [("./itsAsnR2Includes.c", "ClCompile"),
                         ("../vanetza/asn1/its/r2/ActionId_copy.c", "ClCompile"),
                         ("../vanetza/asn1/its/r2/StationId_copy.c", "ClCompile")]
    },
    "asn1_security": {
        "files_to_add": [("./securityAsnIncludes.c", "ClCompile")]
    },
    "asn1_support": {
        "preprocessor_definitions": ["_USE_MATH_DEFINES"]
    },
    "security": {
        "preprocessor_definitions": ["NOMINMAX"],
        "cpp_standard": "stdcpp17"
    },
    "geonet": {
        "preprocessor_definitions": ["NOMINMAX"]
    },
}

# Locate all .vcxproj files in the build directory
def find_vcxproj_files(build_dir):
    return glob.glob(os.path.join(build_dir, "**", "*.vcxproj"), recursive=True)

# Modify a .vcxproj file based on the settings
def modify_vcxproj(vcxproj_file, project_name, settings):
    tree = ET.parse(vcxproj_file)
    root = tree.getroot()

    # Set the XML namespace
    ns = {'': 'http://schemas.microsoft.com/developer/msbuild/2003'}
    ET.register_namespace('', ns[''])

    # Update settings for the project
    for config in root.findall(".//ItemDefinitionGroup", ns):
        # Update C++ standard
        if "cpp_standard" in settings:
            cl_compile = config.find(".//ClCompile", ns)
            if cl_compile is not None:
                cl_compile.set("LanguageStandard", settings["cpp_standard"])

        # Update preprocessor definitions
        if "preprocessor_definitions" in settings:
            cl_compile = config.find(".//ClCompile", ns)
            if cl_compile is not None:
                preprocessor = cl_compile.find("PreprocessorDefinitions", ns)
                if preprocessor is None:
                    preprocessor = ET.SubElement(cl_compile, "PreprocessorDefinitions")
                existing_defs = preprocessor.text or ""
                new_defs = ";".join(settings["preprocessor_definitions"])
                preprocessor.text = existing_defs + ";" + new_defs

    # Add new files to the project
    if "files_to_add" in settings:
        vcxproj_dir = os.path.dirname(vcxproj_file)
        add_files_to_vcxproj(root, settings["files_to_add"], ns, vcxproj_dir)

    # Write back the modified project file
    tree.write(vcxproj_file, encoding="utf-8", xml_declaration=True)

# Add files to the project
def add_files_to_vcxproj(root, files_to_add, ns, vcxproj_dir):
    """
    Add files to the project in the appropriate ItemGroup.

    Args:
        root: XML root element of the .vcxproj file.
        files_to_add: List of tuples [(file_path, file_type)].
        ns: Namespace dictionary for XML parsing.
        vcxproj_dir: Directory containing the .vcxproj file.
    """
    for file_path, file_type in files_to_add:
        # Convert file_path to be relative to the .vcxproj directory
        relative_path = os.path.relpath(file_path, vcxproj_dir)

        # Check if the file is already included
        file_exists = any(
            elem.get("Include") == relative_path
            for elem in root.findall(f".//{file_type}", ns)
        )

        if file_exists:
            print(f"File {relative_path} already exists in the project. Skipping.")
            continue

        # Find the appropriate ItemGroup or create a new one
        item_group = None
        for group in root.findall(".//ItemGroup", ns):
            if group.find(f"{file_type}", ns) is not None:
                item_group = group
                break

        if item_group is None:
            item_group = ET.SubElement(root, "ItemGroup")

        # Add the file to the ItemGroup
        new_file = ET.SubElement(item_group, file_type)
        new_file.set("Include", relative_path)
        print(f"Added {relative_path} as {file_type}")

# Main script
def main():
    build_dir = "C:/Users/Karel Hevessy/src/vanetza-build/shared"  # Replace with your actual build directory

    # Find all project files
    vcxproj_files = find_vcxproj_files(build_dir)

    # Modify each project based on its settings
    for vcxproj_file in vcxproj_files:
        project_name = os.path.basename(vcxproj_file).replace(".vcxproj", "")
        if project_name in settings:
            print(f"Modifying {project_name}...")
            modify_vcxproj(vcxproj_file, project_name, settings[project_name])

if __name__ == "__main__":
    main()