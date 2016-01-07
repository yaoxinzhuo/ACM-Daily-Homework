#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
int judge(int a,int b,int c)
{
    if((a+b)<=c)
    {
        return 3;
    }
    else
    {
        if(a==b&&b==c&&c==a)
        {
            return 0;
        }
        else if(a==b&&b!=c||a==c&&b!=c||c==b&&b!=a)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[3];
    for(int i=1;i<=n;i++)
    {
        cin>>a[0];
        cin>>a[1];
        cin>>a[2];
        sort(a,a+3);
        //cout<<a[0]<<a[1]<<a[2]<<endl;
        int t=judge(a[0],a[1],a[2]);
        if(t==0)
        {
            cout<<"Case #"<<i<<": "<<"equilateral"<<endl;
        }
        if(t==1)
        {
            cout<<"Case #"<<i<<": "<<"isosceles"<<endl;
        }
        if(t==2)
        {
            cout<<"Case #"<<i<<": "<<"scalene"<<endl;
        }
        if(t==3)
        {
            cout<<"Case #"<<i<<": "<<"invalid!"<<endl;
        }
    }
    return 0;
}
