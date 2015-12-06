/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1052
*/
#include<iostream>
#include<algorithm>
using namespace std;
bool bijiao(int a, int b)
{
    return a>b;
}
int main()
{
    int i, j, h, n, gw[1005], tj[1005], kquick, kslow, tquick, tslow, sum;
    while (cin >> n&& n)
    {
        sum = 0;
        for (i = 0;i < n;i++)
            cin >> tj[i];
        for (i = 0;i < n;i++)
            cin >> gw[i];
        sort(gw, gw + n, bijiao);//速度从快到慢排序
        sort(tj, tj + n, bijiao);//速度从快到慢排序
        kquick = tquick = 0;//标记最快的
        kslow = tslow = n - 1;//标记最慢的
        for (i = 0;i < n;i++)//从田忌最快的马开始
        {
            if (tj[tquick] > gw[kquick])//如果田忌最快的马快于国王的马
            {
                sum += 200;
                kquick++;
                tquick++;
            }
            else if (tj[tquick] < gw[kquick])//如果田忌最快的马慢于国王的马，则拿田忌最慢的马和国王最快的马比
            {
                sum -= 200;
                tslow--;
                kquick++;
            }
            else//否则则从双方最慢的马开始，如果田忌慢马比国王慢马快则赢钱后继续，慢的话则必输一场，不赢则国王马不变，田忌马往前移更快的一匹直到不赢为止
            {
                for (j = tslow, h = kslow;j >= tquick;j--, h--)
                {
                    if (tj[j] > gw[h])
                    {
                        sum += 200;
                        tslow--;
                        kslow--;
                    }
                    else 
                    {
                        if (tj[j] < gw[i])
                        {
                            sum -= 200;
                            tslow--;
                            kquick++;
                        }
                        tslow = --j;
                        kslow = h;
                        break;
                    }
                }
            }
            if (tquick > tslow)
                break;
        }
        cout << sum << endl;
    }
    return 0;
}