/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1019
*/
#include<iostream>
using namespace std;

int findmin(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,t1,t2;
        cin>>m;
        m--;
        cin>>t1;
        while(m--)
        {
            cin>>t2;
            t1=t1/findmin(t1,t2)*t2;
        }
        cout<<t1<<endl;
    }
    return 0;
}