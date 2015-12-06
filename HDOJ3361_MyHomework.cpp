/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=3361
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n;i++)
    {
        cin >> p[i];
    }
    for (int i = 0;i < n;i++)
    {
        putchar(p[i]);
    }
    return 0;
}