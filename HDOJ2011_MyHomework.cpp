/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2011
*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    double m,n;
    cin>>m;
    while(m--)
    {
        cin>>n;
        double sum=0.0;
        double i;
        for(i=1;i<=n;i++)
        {
            {
                int t=(int) i;
                if(t%2==0)
                {
                    sum-=1.0/i;
                }
                else
                {
                    sum+=1.0/i;
                }
            }
        }
        cout<<fixed;
        cout<<setprecision(2)<<sum<<endl;
    }
    return 0;
}