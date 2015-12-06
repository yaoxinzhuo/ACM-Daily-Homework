/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2050
*/
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a[10001];
    a[1]=2;
    a[2]=7;
    for(int i=3;i<=10000;i++)
    {
        a[i]=4*(i-1)+a[i-1]+1;
    }
    int T,n;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}