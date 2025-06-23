#ifndef SECURITY_CONTEXT_HPP_FEYZW1RS
#define SECURITY_CONTEXT_HPP_FEYZW1RS

#include <vanetza/common/runtime.hpp>
#include <vanetza/common/stored_position_provider.hpp>
#include <vanetza/security/backend.hpp>
#include <vanetza/security/delegating_security_entity.hpp>
#include <vanetza/security/straight_verify_service.hpp>
#include <vanetza/security/v2/certificate_cache.hpp>
#include <vanetza/security/v2/default_certificate_validator.hpp>
#include <vanetza/security/v2/naive_certificate_provider.hpp>
#include <vanetza/security/v2/sign_header_policy.hpp>
#include <vanetza/security/v2/sign_service.hpp>
#include <vanetza/security/v2/trust_store.hpp>
#include <vanetza/security/v3/certificate_validator.hpp>
#include <vanetza/security/v3/location_checker.hpp>
#include <vanetza/security/v3/naive_certificate_provider.hpp>
#include <vanetza/security/v3/sign_header_policy.hpp>

namespace vanetza
{

class SecurityContext
{
public:
    SecurityContext(Runtime& rt) :
        backend(security::create_backend("default")),
        certificate_provider(rt),
        cert_cache(rt),
        certificate_validator(*backend, cert_cache, trust_store),
        sign_header_policy(rt, position_provider),
        certificate_provider_v3(rt),
        sign_header_policy_v3(rt, position_provider, certificate_provider_v3),
        security(build_sign_service(), build_verify_service(rt))
    {
        trust_store.insert(certificate_provider.root_certificate());
        for (auto cert : certificate_provider.own_chain()) {
            cert_cache.insert(cert);
        }

        // wire up v3 certificate validator
        certificate_validator_v3.use_runtime(&rt);
        certificate_validator_v3.use_position_provider(&position_provider);
        certificate_validator_v3.use_location_checker(&location_checker);
    }

    security::SecurityEntity& entity()
    {
        return security;
    }

    void set_accurate_position(units::GeoAngle latitude, units::GeoAngle longitude)
    {
        PositionFix position_fix;
        position_fix.latitude = latitude;
        position_fix.longitude = longitude;
        position_fix.confidence.semi_major = 25.0 * units::si::meter;
        position_fix.confidence.semi_minor = 25.0 * units::si::meter;
        assert(position_fix.confidence);
        position_provider.position_fix(position_fix);
    }

    security::v3::CertificateCache& certificate_cache_v3()
    {
        return certificate_provider_v3.cache();
    }

private:
    std::unique_ptr<security::VerifyService> build_verify_service(Runtime& rt)
    {
        std::unique_ptr<security::StraightVerifyService> service {
            new security::StraightVerifyService(rt, *backend, position_provider)
        };
        service->use_certificate_cache(&cert_cache);
        service->use_certificate_provider(&certificate_provider);
        service->use_certificate_validator(&certificate_validator);
        service->use_sign_header_policy(&sign_header_policy);

        service->use_certificate_provider(&certificate_provider_v3);
        service->use_certificate_validator(&certificate_validator_v3);
        service->use_sign_header_policy(&sign_header_policy_v3);
        return service;
    }

    std::unique_ptr<security::SignService> build_sign_service()
    {
        return std::unique_ptr<security::SignService> {
            new security::v2::StraightSignService(certificate_provider, *backend, sign_header_policy)
        };
    }

    StoredPositionProvider position_provider;
    security::v3::DefaultLocationChecker location_checker;
    std::unique_ptr<security::Backend> backend;

    security::v2::NaiveCertificateProvider certificate_provider;
    std::vector<security::v2::Certificate> roots;
    security::v2::TrustStore trust_store;
    security::v2::CertificateCache cert_cache;
    security::v2::DefaultCertificateValidator certificate_validator;
    security::v2::DefaultSignHeaderPolicy sign_header_policy;
    
    security::v3::NaiveCertificateProvider certificate_provider_v3;
    security::v3::DefaultSignHeaderPolicy sign_header_policy_v3;
    security::v3::DefaultCertificateValidator certificate_validator_v3;
    
    security::DelegatingSecurityEntity security;
};

} // namespace vanetza

#endif /* SECURITY_CONTEXT_HPP_FEYZW1RS */
