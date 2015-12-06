/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1061
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int a=N;
        int b=N;
        b=b%4;
        if(b==0)
        {
            b=4;
        }
        a=a%10;
        cout<<((int)pow(a,b))%10<<endl;
    }
    return 0;
} 