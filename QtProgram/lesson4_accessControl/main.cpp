#include <iostream>
#include <unistd.h>


using namespace std;

int main()
{
    pid_t pid = fork();
    int status;
    if(pid == -1)
    {
        cout<<"error"<<endl;
        return 0;
    }
    if(pid == 0)
    {

            cout<<"child begain"<<endl;
            cout<<"child end"<<endl;
            cout<<"child:"<<getpid()<<endl;


    }
    else
    {

            cout<<"parent begain"<<endl;
            cout<<"parent:"<<getpid()<<endl;
            sleep(100);
            cout<<"parent end"<<endl;



    }
    return 0;
}

