/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2190
*/
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a[55];
    a[0]=0;
    a[1]=1;
    a[2]=3;
    a[3]=5;
    for(int i=4;i<55;i++)
    {
        a[i]=a[i-2]*2+a[i-1];
    }
    int c,n;
    cin>>c;
    while(c--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}