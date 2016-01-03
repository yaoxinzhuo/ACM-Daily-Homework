//http://acm.hdu.edu.cn/showproblem.php?pid=2027
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a,e,ii,o,u;
	int n;
	char s[101];
	cin>>n;
	getchar();
	for(int i=0;i<n;i++)
	{
		a=e=ii=o=u=0;
		cin.getline(s,100,'\n');
		int len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(s[i]=='a')
			{
				a++;
			}
			if(s[i]=='e')
			{
				e++;
			}
			if(s[i]=='i')
			{
				ii++;
			}
			if(s[i]=='o')
			{
				o++;
			}
			if(s[i]=='u')
			{
				u++;
			}
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<ii<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(i!=n-1)
		{
			cout<<endl;
		}
	}
}
