#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>  // Provides the `socket` function and related constants
#include <netinet/in.h> // Defines `sockaddr_in`, a structure used for handling IP addresses and port numbers
#include <iostream>

namespace HDE
{
    class SimpleSocket
    {
        private:
        struct sockaddr_in address;
        int sock;
        int connection;

        public:
         SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
         // Virtual func to connect to a network
         virtual int connect_to_network(int sock,  struct sockaddr_in address) = 0;
         // test the connection
         void test_connection(int);
         // Getters
         struct sockaddr_in get_address();
         int get_sock();
         int get_connection();
    
    };
    
   
    
}

#endif