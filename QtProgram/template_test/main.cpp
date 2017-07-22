#include <iostream>
#include <queue>
#include <stdlib.h>
#include <string>


using namespace std;

/*
template <class T1, class T2>
int write(T1 &a, T2 &b)
{

    b.push(a);
}
*/

int write(queue<string> &q1, queue<string> &q2)
{
    string temp = q1.front();
    q2.push(temp);
    return 0;
}
int main()
{
    char buf1[100];
    queue<string> que1, que2;
    //queue<string>::iterator it;
    cin>>buf1;
    que1.push(buf1);
    cout<<que1.front()<<endl;
    write(que1, que2);
    //que2.push(que1.front());
    cout<<que2.front()<<endl;

    cout << "Hello World!" << endl;
    return 0;
}

