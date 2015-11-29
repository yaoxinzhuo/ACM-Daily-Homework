#include<iostream>
//#include<algorithm>
using namespace std;
int main()
{
    int n,a,b,c,temp;
    long long int sum;
    long long int have;
    while(cin>>n>>a>>b>>c)
    {
        int t[n];
        sum=0;
        have=0;
        while(n--)
        {
            cin>>temp;
            have+=temp;
            if(have<a)
            {
                sum+=0;
                continue;
            }
            else if ((have>=a) &&(have<b))
            {
                sum+=2;
                have=0;
                continue;
            }
            else if((have>=b)&&(have<c))
            {
                sum+=3;
                have=0;
                continue;
            }
            else
            {
                sum+=4;
                have=0;
                continue;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}