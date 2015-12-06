/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1092
*/
#include<iostream>
using namespace std;
int main()
{
    int n, sum, t;
    while (cin >> n )
    {
        if (n == 0)
        {
            break;
        }
        else
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
}