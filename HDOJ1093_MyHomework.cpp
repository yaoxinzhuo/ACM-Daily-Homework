/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1093
*/
#include<iostream>
using namespace std;
int main()
{
    int m, n, sum, t;
    cin >> m;
    while (m --)
    {
        cin >> n;
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