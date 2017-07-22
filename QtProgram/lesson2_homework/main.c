//1、除printf函数之外，不用任何c语言库函数，实现将字符串转化为整数的函数myatoi(可以支持负整数的转化)。
//2、除printf函数之外，不用任何c语言库函数，实现将整数转化为字符串的函数myitoa(可以支持负整数的转化)。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myatoi(char *buf_in, int len);
//char* myitoa(int num_in);
int char2i(char c);

int main(void)
{
    char buf_in[100] = {0};
    char *buf_out = NULL;
    int len = 0;
    int num_in = 0;
    while(1)
    {
    printf("please input: ");
    scanf("%s", buf_in);
    len = strlen(buf_in);
    num_in = myatoi(buf_in, len);
    printf("num_in = %d\n", num_in);

    //buf_out = myitoa(num_in);
    //printf("buf_out = %s", buf_out);
    }
    return 0;
}

int myatoi(char *buf_in, int len)
{
    if(buf_in == NULL || &len == NULL)
    {
        printf("error 1");
        return -1;
    }
    char *pbuf_in = buf_in;
    int i = 0;
    int flag = 0;
    int num_out = 0;
    if(pbuf_in[0] == '-')
    {
        flag = 1;
        i++;
    }
    for(; i<len; i++)
    {
        num_out = num_out*10 + char2i(pbuf_in[i]);
    }
    if(flag == 1)
    {
        num_out = 0 - num_out;
    }
    return num_out;
}
//char* myitoa(int num_in);

int char2i(char c)
{
    int i = 0;
    switch(c)
    {
        case '0':i = 0; break;
        case '1':i = 1; break;
        case '2':i = 2; break;
        case '3':i = 3; break;
        case '4':i = 4; break;
        case '5':i = 5; break;
        case '6':i = 6; break;
        case '7':i = 7; break;
        case '8':i = 8; break;
        case '9':i = 9; break;
    default:
        break;

    }
    return i;
}

