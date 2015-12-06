/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2501
*/
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a[31];
    a[0]=0;
    a[1]=1;
    a[2]=3;
    a[3]=5;
    for(int i=4;i<31;i++)
    {
        a[i]=a[i-1]+a[i-2]*2;
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