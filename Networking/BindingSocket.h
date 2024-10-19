#ifndef BindingSocket_h
#define BindingSocket_h

#include "SimpleSocket.h"

namespace HDE
{

class BindingSocket : public SimpleSocket {

public:
    // Constructor
    BindingSocket(int domain, int service, int protocol, int port, u_long interface);

   // Virtual function from parent
    int connect_to_network(int sock, struct sockaddr_in address) override; 

};


}

#endif
