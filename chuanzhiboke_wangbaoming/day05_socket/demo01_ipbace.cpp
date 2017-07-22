#include <iostream>

using namespace std;

int main()
{
    unsigned int data = 0x12345678;
    char *p = (char*)&data;
    
    //cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<" "<<p[3];
    
    printf("%x, %x, %x, %x\n", p[0], p[1], p[2], p[3]);
    if (p[0] == 0x78 ) {
        printf("xiaoduan");
    }else
    {
        //cout<<"大端模式"<<endl;
        printf("daduan");
    }
    return 0;
}