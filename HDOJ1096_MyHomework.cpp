/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1096
*/
#include<iostream>
using namespace std;
int main()
{
    int m, n, sum,t;
    cin >> m;
    m -= 1;
    cin >> n;
    sum = 0;
    while (n--)
    {
        cin >> t;
        sum += t;
    }
    cout << sum << endl;
    while (m--)
    {
        cin >> n;
        sum = 0;
        while (n--)
        {
            cin >> t;
            sum += t;
        }
        cout << endl;
        cout << sum << endl;
    }
    return 0;
}