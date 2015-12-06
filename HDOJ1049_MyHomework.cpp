/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1049
*/
#include<iostream>
using namespace std;
int main()
{
    int time, current, n, u, d;
    while (cin >> n >> u >> d)
    {
        if (n == 0 && u == 0 & d == d)
        {
            break;
        }
        else
        {
            current = 0;
            time = 0;
            while (1)
            {
                current += u;
                time += 1;
                if (!(current < n))
                {
                    break;
                }
                current -= d;
                time += 1;
            }
            cout << time << endl;
        }
    }
    return 0;
}