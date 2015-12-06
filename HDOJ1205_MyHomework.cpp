/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1205
*/
#include<iostream>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int sum=0;
        long long int max=0;
        long long int n;
        long long int acc;
        cin>>n;
        while(n--)
        {
            cin>>acc;
            if(acc>=max)
            {
                max=acc;
            }
            sum+=acc;
        }
        if((sum-max+1)>=max)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}