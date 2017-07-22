/*n 只奶牛坐在一排，每个奶牛拥有 ai 个苹果，现在你要在它们之间转移苹果，
 * 使得最后所有奶牛拥有的苹果数都相同，每一次，你只能从一只奶牛身上拿走
 * 恰好两个苹果到另一个奶牛上，问最少需要移动多少次可以平分苹果，如果方
 * 案不存在输出 -1。
*/

#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    while(scanf("%d", &n) != EOF)
    {
        int count = 0;
        int sum = 0;
        int *a =  new int[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }
        if((sum/n) != 0)
        {
            count = -1;
            cout<<count<<endl;
            return 0;
        }
        int temp = 0;
        for(int i=0; i<n; i++)
        {
            temp = a[i] - sum/n;
            if (temp > 0)
            {
                if(temp/2 != 0)
                {
                    count = -1;
                    cout<<count<<endl;
                    return 0;
                }
                count += temp % 2;

            }
        }
        cout<<count<<endl;

    }
    return 0;
}

