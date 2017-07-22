/*a.txt文件内容如下：
32
45
65
32
67
454
89
54
24
75
3
67
890
32
1


1、编写一个程序读取a.txt文件，将文件内容数字从小到大排序，并将排序结果写入b.txt。（完成）
2、通过读取/proc下的相关文件，得到系统CPU信息，内存信息。（完成）

c.txt文件内容如下
index1 = 45
index2 = 36
index3 = 231
index4 = 43
index5 = 100
index6 = 123
index7 = 51

3、通过读取读取c.txt文件内容中等号右值，并将右值最大值，最小值和平均值打印到屏幕。（完成）
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    char s1[] = "a.txt";
    char s2[] = "b.txt";
    int num[100] = {0};
    int count = 0;
    FILE *p1 = fopen(s1, "r+");
    FILE *p2 = fopen(s2, "a+");

    //读取a.txt中的内容,存入num数组
    if(p1 == NULL)
    {
        printf("error is %s\n", strerror(errno));
        return 0;
    }
    else
    {
        printf("file read success\n");
        char buf1[10];
        memset(buf1, 0, sizeof(buf1));
        while(fgets(buf1, sizeof(buf1), p1) != NULL)
        {
            num[count] = atoi(buf1);
            count++;
        }
        fclose(p1);
    }

    //排序


    //将数据写入b.txt中
    if(p2 == NULL)
    {
        printf("error is %s\n", strerror(errno));
        return 0;
    }
    else
    {
        printf("file write success\n");
        char buf2[10];
        memset(buf2, 0, sizeof(buf2));
        for(int i=0; i<=count; i++)
        {
            sprintf(buf2, "%d\n", num[i]);
            fputs(buf2, p2);
        }
        fclose(p2);
    }
    return 0;
}

