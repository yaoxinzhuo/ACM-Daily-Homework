/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1108
*/
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    else
    {
        if(a>b)
        {
            int t;
            while(b!=0)
            {
                t=a%b;
                a=b;
                b=t;
            }
            return a;
        }
        else
        {
            int t;
            while(a!=0)
            {
                t=b%a;
                b=a;
                a=t;
            }
            return b;
        }
    }
}

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<(a*b)/(gcd(a,b))<<endl;
    }
    return 0;
}