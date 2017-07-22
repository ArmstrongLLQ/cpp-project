#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <sys/sem.h>


int main()
{
//创建一个共享内存,用来让父进程与子进程进行通信
int shmid;
shmid = shmget((key_t)1235, 1024, 0666|IPC_CREAT);
if(shmid == -1)
{
    printf("shmget failed\n");
    exit(EXIT_FAILURE);
}
    
    //创建信号量
    
        
        int semid = semget((key_t) 1234, 1, 0666 | IPC_CREAT | IPC_EXCL);
    if (semid == -1)
    {
        printf("semget error %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }


    return 0;

}
