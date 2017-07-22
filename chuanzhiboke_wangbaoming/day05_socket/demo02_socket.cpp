#include <sys/socket.h>
#include <iostream>
#include <sys/types.h>

using namespace std;




int main()
{
    int sockfd = 0;
    sockfd = socket(PF_INET, SOCK_STREAM, 0);
    if (socket == -1) {
        perror("func socket\n");
        exit(0);
    }
    
    struct sockaddr_in serveraddr;
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_port = htons(8080);
    
    bind(sockfd, const struct sockaddr *address, socklen_t address_len);
    return 0;
}
