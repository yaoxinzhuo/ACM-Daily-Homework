/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1001
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n % 2 == 0)
        {
            cout << n / 2 * (n + 1) << endl;
            cout << endl;
        }
        else
        {
            cout << (n + 1) / 2 * n << endl;
            cout << endl;
        }
    }
    return 0;
}