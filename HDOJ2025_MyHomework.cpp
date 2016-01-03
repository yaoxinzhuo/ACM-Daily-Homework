/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2025
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[101];
	bool f; 
	while(cin.getline(s,100,'\n'))
	{
		f=true;
		char maxchar='a';
		int len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(s[i]>=maxchar)
			{
				maxchar=s[i];
			} 
		}
		for(int i=0;i<len;i++)
		{
			if(s[i]==maxchar)
			{
				cout<<s[i]<<"(max)";
			}
			else
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	} 
	return 0;
}