#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T = 0;
    while(cin >> T)
    {
        vector<int> arrA;
        vector<int> arrB;
        for(int i=0; i<T; i++)
        {
            int n = 0, k = 0;
            cin >> n >> k;
            for(int i=0; i<2*n; i++)
            {
                int temp = 0;
                cin >> temp;
                arrA.push_back(temp);
                arrB.push_back(temp);
            }
            for (int j = 0; j < k; j++)//一组数据洗牌次数的循环
                        {
                            for (int c = 0, i = 1; c < 2*n; c++)//循环交换数组数据
                            {
                                if (c < n)
                                {
                                    arrA[c+c] = arrB[c];
                                }
                                else
                                {
                                    arrA[c-(n-i)] = arrB[c];
                                    i++;
                                }
                            }
                            for (int i = 0; i < 2*n; i++)
                            {
                                arrB[i] = arrA[i];
                            }
                        }
            for(int i=0; i<2*n; i++)
            {
                cout<<arrA[i];
            }
        }
    }
    return 0;
}

