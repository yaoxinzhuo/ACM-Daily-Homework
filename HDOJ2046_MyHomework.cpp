/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2046
*/
#include<iostream>
using namespace std;
int main()
{
    long long int a[55];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=3;
    for(int i=4 ;i<51;i++)
    {
        a[i]=a[i-1]+a[i-2]; 
    }
    int n;
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}