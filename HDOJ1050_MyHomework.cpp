/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1050
*/
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        int t[210]={0};
        cin>>N;
        while(N--)
        {
            int a,b;
            cin>>a>>b;
            if(a>b)
            {
                int temp=a;
                a=b;
                b=temp;
            } 
            for(int i=(a+1)/2;i<=(b+1)/2;i++)
            {
                t[i]+=1;
            }
        }
        int max=0;
        for(int i=1;i<201;i++)
        {
            if(t[i]>max)
            {
                max=t[i];
            }
        } 
        cout<<10*max<<endl;
    }
    return 0;
}