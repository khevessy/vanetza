#include "signing.hpp"
#include <boost/program_options.hpp>
#include <iostream>
#include <random>

using namespace vanetza;
using namespace vanetza::security;
namespace po = boost::program_options;

bool SecuritySigningCase::parse(const std::vector<std::string>& opts)
{
    po::options_description desc("Available options");
    desc.add_options()
        ("help", "Print out available options.")
        ("messages", po::value<unsigned>(&messages)->default_value(10000), "Number of messages.")
        ("signer", po::value<std::string>(&signer_info_type)->default_value("certificate"), "Signer embedded into the messages, may be 'certificate', 'hash' or 'chain'.")
    ;

    po::variables_map vm;
    po::store(po::command_line_parser(opts).options(desc).run(), vm);

    if (vm.count("help")) {
        std::cerr << desc << std::endl;

        return false;
    }

    try {
        po::notify(vm);

        if (signer_info_type != "certificate" && signer_info_type != "hash" && signer_info_type != "chain") {
            throw std::runtime_error("Invalid signer info type.");
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl << std::endl << desc << std::endl;

        return false;
    }

    return true;
}

int SecuritySigningCase::execute()
{
    if (signer_info_type == "hash") {
        // Sign one message with CAM profile, so the next message only includes the certificate hash
        DownPacket packet;
        packet.layer(OsiLayer::Application) = ByteBuffer { 0xC0, 0xFF, 0xEE };

        SignRequest initial_sign_request;
        initial_sign_request.plain_message = std::move(packet);
        initial_sign_request.its_aid = aid::CA;
        security_entity.encapsulate_packet(std::move(initial_sign_request));
    }

    if (signer_info_type == "certificate") {
        sign_header_policy.request_certificate();
    } else if (signer_info_type == "chain") {
        sign_header_policy.request_certificate_chain();
    }

    std::cout << "Starting benchmark for messages ... ";

    for (unsigned i = 0; i < messages; i++) {
        DownPacket packet;
        packet.layer(OsiLayer::Application) = ByteBuffer { 0xC0, 0xFF, 0xEE };

        SignRequest sign_request;
        sign_request.plain_message= std::move(packet);
        sign_request.its_aid = aid::CA;

        EncapConfirm encap_confirm = security_entity.encapsulate_packet(std::move(sign_request));
    }

    std::cout << "[Done]" << std::endl;

    return 0;
}
