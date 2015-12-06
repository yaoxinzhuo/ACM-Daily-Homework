/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1021
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        if(t%8==2||t%8==6)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}