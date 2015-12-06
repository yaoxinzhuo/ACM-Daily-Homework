/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2673
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    int p[10001];
    while (cin >> N)
    {
        if (N == 1)
        {
            int t;
            cin >> t;
            cout << t << endl;
        }
        else
        {
            for (int i = 1;i <= N;i++)
            {
                cin >> p[i];
            }
            sort(p+1, p + N+1);
            if (N % 2 == 0)
            {
                int i;
                int q = N / 2;
                for (i = 0;i < q - 1;i++)
                {
                    cout << p[N - i] << " ";
                    cout << p[1 + i] << " ";
                }
                cout << p[N - i] << " ";
                cout << p[1 + i];
                cout << endl;
            }
            else
            {
                int i;
                int q = (N - 1) / 2;
                for (i = 0;i < q - 1;i++)
                {
                    cout << p[N - i] << " ";
                    cout << p[1 + i] << " ";
                }
                cout << p[N - i] << " ";
                cout << p[1 + i] << " ";
                cout << p[(N + 1) / 2] << endl;
            }
        }
    }
    return 0;
}