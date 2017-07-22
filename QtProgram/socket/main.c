#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <netinet/in.h>
#include <pthread.h>

void *sendmessage(void *arg)
{
    int *st = (int*)arg;
    char buf[1024];
    while(1)
    {
        memset(buf, 0, sizeof(buf));
    read(STDIN_FILENO, buf, sizeof(buf));
    if(send(*st, buf, strlen(buf), 0) == -1)//send buf
    {
        printf("send error:%s\n", strerror((errno)));
        return NULL;
    }
    }
    return NULL;
}

void *resvmessage(void *arg)
{
    int *st = (int*)arg;
    char buf[1024];
    while(1)
    {
    memset(buf, 0, sizeof(buf));
    if(recv(*st, buf, sizeof(buf), 0) > 0)
    {
        printf("recv is %s\n", buf);
    }else
    {
        printf("recv error: %s\n", strerror(errno));
        return NULL;
    }
    }
    return NULL;
}

int main(void)
{
    int st = socket(AF_INET, SOCK_STREAM, 0);//create socket
    if(st == -1)
    {
        printf("socket error: %s\n", strerror(errno));
    }
    struct sockaddr_in addr;//define an ip address
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(st, (struct sockaddr *)&addr, sizeof(addr)) == -1)//connect server
    {
        printf("connect error:%s\n", strerror(errno));
        return EXIT_FAILURE;
    }


    pthread_t ptr1, ptr2;
    pthread_create(&ptr1, NULL, sendmessage, &st);
    pthread_create(&ptr2, NULL, resvmessage, &st);

    pthread_join(ptr1, NULL);
    pthread_join(ptr2, NULL);


    close(st);
    return 0;
}

