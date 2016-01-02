/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2024
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[101]; 
	int n;
	bool f;
	cin>>n;
	getchar();
	while(n--)
	{
		cin.getline(s,100,'\n');
		f=true;
		if(s[0]=='_' || s[0]>='a' && s[0]<='z' || s[0]>='A' && s[0]<='Z'  )
		{
			int len=strlen(s);
			for(int i=1;i<len;i++)
			{
				if(s[i]=='_' || s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' ||s[i]>='0'&&s[i]<='9' )
				{
					continue;
				}
				else
				{
					f=false;
					break;
				}
			}
		}
		else
		{
			cout<<"no"<<endl;
			continue;
		}
		if(f)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}