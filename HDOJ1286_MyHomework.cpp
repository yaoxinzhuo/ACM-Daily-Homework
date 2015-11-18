/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1286
*/

#include<iostream>
#include<stdio.h>
#include<algorithm>

bool a[32769];

using namespace std;

int main()
{
    int CN,t,sum,i,j;
    scanf("%d",&CN);
    while(CN--)
    {
        cin>>t;
        sum=0;
        memset(a,false,sizeof(a));
        for(i=2;i<=t/2;i++)
        {
            if(t%i==0)
            {
                for (j=i;j<t;j+=i)
                if(a[j]==false)
                {
                    a[j]=true;
                }
            }
        }
        for(i=1;i<t;i++)
        {
            if(a[i]==true)
            {
                sum++;
            }
        }
        cout<<t-sum-1<<endl;
    }
    return 0;
}