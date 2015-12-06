/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2018
*/
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a[55];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=3;
    a[4]=4;
    for(int i=5;i<55;i++)
    {
        a[i]=a[i-1]+a[i-3];
    }
    int n;
    while(cin>>n&&n)
    {
        cout<<a[n]<<endl;
        
    }
    return 0;
}