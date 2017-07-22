#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int len = 0;
    char buf[100] = {0};
    int fd = open("fifo1", O_RDONLY);
    while((len = read(fd, buf, sizeof(buf)))>0)
    {
        printf("%s\n", buf);
    }
    close(fd);
    return 0;
}

