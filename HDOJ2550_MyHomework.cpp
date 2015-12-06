/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2550
*/
#include<iostream>
using namespace std;

void zaogong(int length, int num)
{
    if ( num == 0 || length == 0 )
    {
        return;
    }
    else
    {
        int t;
        for (t = 0;t < num;t++)
        {
            cout << ">+";
            for (int k = 0;k < (length - 2);k++)
            {
                cout << "-";
            }
            cout << "+>";
            cout << endl;
        }
        cout << endl;
    }
    return;
}

int main()
{
    int r, t, a[31] = { 0 }, ai, bi;
    cin >> r;
    for (int k = 0;k < r;k++)
    {
        for (int q = 0;q < 31;q++)
        {
            a[q] = 0;
        }
        t = 0, ai = 0,bi = 0;
        cin >> t;
        while (t--)
        {
            cin >> ai >> bi;
            a[ai] += bi;
        }
        for (int i = 0;i < 31;i++)
        {
            zaogong(i, a[i]);
        }
    }
    return 0;
}