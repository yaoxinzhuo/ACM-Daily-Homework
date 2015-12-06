/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2000
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char ch[3];
    while(cin>>ch)
    {
    sort(ch,ch+3);
    cout<<ch[0]<<" "<<ch[1]<<" "<<ch[2]<<endl;
    }    
    return 0;
} 