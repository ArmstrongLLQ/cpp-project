#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

void *func(void *arg)
{
    printf("pthread start\n");
    return NULL;
}
int main(void)
{
    pthread_t thrd;
    if ((pthread_create(&thrd, NULL, func, NULL))!=0)
    {
        printf("error is %s", strerror(errno));
    }
    sleep(1);
    printf("Hello World!\n");
    return 0;
}

