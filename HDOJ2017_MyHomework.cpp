/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2017
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n,sum;
	cin>>n;
	while(n--)
	{
		sum = 0;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if('0'<=s[i]&&s[i]<='9')
			{
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
