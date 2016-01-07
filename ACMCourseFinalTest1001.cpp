#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long int sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=a[i]-a[i-1];
        }
        sum+=a[n-1]-a[0];
        cout<<sum<<endl;
    }
    return 0;
}
