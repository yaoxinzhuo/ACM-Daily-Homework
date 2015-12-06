/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2008
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    while((cin>>n)&&(n!=0))
    {
        double temp;
        int a=0,b=0,c=0;
        while(n--)
        {
            cin>>temp;
            if(temp==0.0)
            {
                b+=1;
            }
            else if(temp>0.0)
            {
                c+=1;
            }
            else
            {
                a+=1;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}