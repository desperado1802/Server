

#include "SimpleSocket.h"

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface){
    // Define address structure
    address.sin_family = domain;
    address.sin_port = htons(port);   // Convert port to network byte order
    address.sin_addr.s_addr = htonl(interface);  // Convert IP address to network byte order


    // Establish connection
    int sock = socket(domain, service, protocol);
    test_connection(sock);

   
    

}
// Test connection virtual function
void HDE::SimpleSocket::test_connection(int item_to_test){
// confirms that the socket or connection has been properly established
    if(item_to_test < 0){
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}

struct sockaddr_in HDE::SimpleSocket::get_address(){
    return address;
}

int HDE::SimpleSocket::get_sock(){
    return sock;
}

int HDE::SimpleSocket::get_connection(){
    return connection;
}

// Setter

void HDE::SimpleSocket::set_connection(int con){
    connection = con;
}