//http://acm.hdu.edu.cn/showproblem.php?pid=2029
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s1,s2;
	while(n--)
	{
		cin>>s1;
		s2.assign(s1.rbegin(),s1.rend());
		if(s1==s2)
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
