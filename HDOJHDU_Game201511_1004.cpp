#include<iostream>
#include<cmath>
using namespace std;
unsigned long long int a[10000];

bool judge(int n)
{
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    int i=0;
    for(int j=2;j<10008;j++)
    {
        if(judge(j))
        {
           a[i]=j*j;
           i++;
        }
    }
    //cout<<i<<endl;
    int N;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>N;
        if(N<=6)
        {
            cout<<"4"<<endl;
        }
        else
        {
            for(int q=1239;q>=0;q--)
            {
                if((N<a[q])&&(N>a[q-1]))
                {
                    if((a[q]-N)>(N-a[q-1]))
                    {
                        cout<<a[q-1]<<endl;
                    }
                    else
                    {
                        cout<<a[q]<<endl;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
