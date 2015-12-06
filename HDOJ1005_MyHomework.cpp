/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1005
*/
#include<iostream>
using namespace std;
int fun(int a,int b,int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return (a*fun(a,b,n-1)+b*fun(a,b,n-2))%7;
    }
}
int main()
{
    
    int A,B,n;
    while(cin>>A>>B>>n)
    {
        if(A==0&&B==0&&n==0)
        {
            break;
        }
        else
        {
            cout<<fun(A,B,n%49)<<endl;
        }
    }
    
    return 0;
}