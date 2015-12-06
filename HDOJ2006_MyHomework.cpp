/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2006
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int t;
        int result=1;
        while(n--)
        {    
            cin>>t;
            result*=((t%2==0)?1:t);
        }
        cout<<result<<endl;
    }
    return 0;
}