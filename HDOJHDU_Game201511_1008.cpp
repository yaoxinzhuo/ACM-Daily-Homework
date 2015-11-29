#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int T,tt;
    int n,m,py,sum;
    int k;
    int a[10005];
    cin>>T;
    for(int tt=0;tt<T;tt++)
    {
        cin>>n>>m>>k;
        sum=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);//i is i-1th xiangmu
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&py);
            if(k<a[py-1])
            {
                k=-1;
                continue;
            }
            else
            {
                k-=a[py-1];
                a[py-1]=0;
            }
        }
        if(k<0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                sum++;
                continue;
            }
            if(k<a[i])
            {
                break;
            }
            k-=a[i];
            sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
