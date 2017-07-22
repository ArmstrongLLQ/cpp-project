#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main()
{
    close(STDOUT_FILENO);
    int fd1 = open("/dev/ttys001", O_WRONLY);
    char s[] = "a.txt";
    int fd = open(s, O_RDONLY);
    while(1)
    {
        printf("%d  %d/n", fd1, fd);
        sleep(1);
    }
    return EXIT_SUCCESS;
}




//将buf的内容写到标准输出和将标准输入的文件读入buf


