#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>

void catchSignal(int signo)
{
    switch (signo) {
    case SIGINT:
        printf("hello signal\n");
    }

}
int main(void)
{
    signal(SIGINT, catchSignal);



    while(1)
    {
        printf("hello world\n");
        sleep(1);
    }
    return 0;
}

