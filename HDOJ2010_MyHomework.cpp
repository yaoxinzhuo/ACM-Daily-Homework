/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2010
*/
#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)//100<=m<=n<=999
    {
        if(n<153)
        {
            cout<<"no"<<endl;
        }
        else if(m>407)
        {
            cout<<"no"<<endl;
        }
        else
        {
            int f=1;
            for(int i=m;i<=n;i++)
            {
                if(i==153||i==370||i==371||i==407)
                {
                    if(f!=1)
                    {
                        cout<<" ";
                    }
                    f++;
                    cout<<i;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}