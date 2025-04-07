#ifndef AUTOTALKS_LINK_HPP_
#define AUTOTALKS_LINK_HPP_

#include "raw_socket_link.hpp"
#include "atlk/v2x_service.h"
#include <iostream>

class AutotalksLink : public LinkLayer
{
public:
    /*
     * Constructor used for device and thread initialization.
     */
    AutotalksLink(boost::asio::io_context&);

    /*
     * Destructor used for deinitialization.
     */
    ~AutotalksLink(void);
    void request(const vanetza::access::DataRequest&, std::unique_ptr<vanetza::ChunkPacket>) override;
    void indicate(IndicationCallback callback) override;
    void data_received(uint8_t*, uint16_t, v2x_receive_params_t);

private:
    static constexpr std::size_t layers_ = num_osi_layers(vanetza::OsiLayer::Physical, vanetza::OsiLayer::Application);
    IndicationCallback callback_;
    std::array<vanetza::ByteBuffer, layers_> buffers_;
    boost::asio::io_context& io_;
};



#endif /* AUTOTALKS_LINK_HPP_ */

