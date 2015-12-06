/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2035
*/
#include<iostream>
using namespace std;

int main()
{
    int A,B;
    while(cin>>A>>B)
    {
        if(A==0&&B==0)
        {
            break;
        }
        else
        {
            int a;
            a=A%1000;
            for(int i=1;i<B;i++)
            {
                a=(a*A)%1000;                
            }
            cout<<a<<endl;
        }
    }
    return 0;
}