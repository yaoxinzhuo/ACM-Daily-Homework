/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2002
*/
#include<iostream>
#include<cstdio>
#include<cmath>

const double PI = 3.1415927;

using namespace std;
int main()
{
    double temp;
    double result;
    while(cin>>temp)
    {
        result = 4.0*PI*pow(temp,3)/3.0;
        printf("%.3lf\n",result);
    }
    return 0;
}