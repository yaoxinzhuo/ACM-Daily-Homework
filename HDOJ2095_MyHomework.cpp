/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2095
*/
#include<iostream>
#include<stdio.h>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    while (scanf("%d",&n))
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            int temp, t;
            scanf("%d",&temp);
            n -= 1;
            while (n--)
            {
                scanf("%d",&t);
                temp ^= t;
            }
            cout << temp << endl;
        }
    }
    return 0;
}