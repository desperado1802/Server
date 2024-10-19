#ifndef ConnectingSocket_h
#define ConnectingSocket_h

#include "SimpleSocket.h"

namespace HDE
{
    class ConnectingSocket : public SimpleSocket {

        public:
        // Constructor
        ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);

        // Override the virtual function from the parent class
        int connect_to_network(int sock, struct sockaddr_in address) override;
    };
}

#endif
