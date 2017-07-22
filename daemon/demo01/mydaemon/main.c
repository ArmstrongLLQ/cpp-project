#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int mydaemon(int nochdir, int noclose);

int main(int argc, char *argv[])
{
    mydaemon(1, 1);

    while(1)
    {
        sleep(1);
    }
    return 0;
}

int mydaemon(int nochdir, int noclose)
{
    pid_t pid;
    pid = fork();
    if(pid == -1)
        printf("fork error");

    if(pid > 0)
        exit(0);

    if (-1 == setsid())
        printf("setpid error");

    if(nochdir != 0)
        chdir("/");
        umask(0);
    if(noclose != 0)
    {
        close(STDIN_FILENO);
        close(STDERR_FILENO);
        close(STDOUT_FILENO);
    }
    return 0;
}

/*
int mydaemon(int nochdir, int noclose)
{

    ​if (pid==-1)
        ​​printf("fork error");

    ​if (pid>0)
        ​​exit(EXIT_SUCCESS);

    ​setsid();
    ​
    ​if (nochdir == 0)
        ​​chdir("/");
    ​if (noclose == 0)
        ​{
        ​​int i;
        ​​for (i=0; i<3; ++i)
            ​​​close(i);
        //相当于把0号文件描述符之下/dev/null
        ​​open("/dev/null", O_RDWR); //fd文件描述符fd-0的文件描述符指向  -16
        ​​dup(0); //把0号文件描述符 赋值给空闲的文件描述符 1
        ​​dup(0); //把0号文件描述符 赋值给空闲的文件描述符 2

        ​}


    return 0;
}
*/
