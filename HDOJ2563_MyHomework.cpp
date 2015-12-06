/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2563
*/
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a[21];
    a[0]=1;
    a[1]=3;
    a[2]=7;
    for(int i=3;i<21;i++)
    {
        a[i]=2*a[i-1]+a[i-2];
    }
    int T,n;
    cin>>T; 
    while(T--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}