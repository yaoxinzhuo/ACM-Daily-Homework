/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2009
*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    double m,n;
    while(cin>>n>>m)
    {
        double sum=0.00;
        sum+=n;
        m-=1;
        while(m--)
        {
            n=sqrt(n);
            if(n>0.0001)
            {
            sum+=n;
            }
            else
            {
                break;
            }
        }
        cout<<fixed;
        cout<<setprecision(2)<<sum<<endl;
    }
    return 0;
}