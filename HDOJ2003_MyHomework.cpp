/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2003
*/
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{
    double t;
    while(cin>>t)
    {
        if(t>=0)
        {
            printf("%.2lf\n",t);
        }
        else
        {
            printf("%.2lf\n",-t);
        }
    }
    return 0;
}