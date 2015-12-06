/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1094
*/
#include<iostream>
using namespace std;
int main()
{
    int n, sum, t;
    while (cin >> n)
    {
            sum = 0;
            while (n--)
            {
                cin >> t;
                sum += t;
            }
            cout << sum << endl;
    }
}