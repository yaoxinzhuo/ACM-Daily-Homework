//http://acm.hdu.edu.cn/showproblem.php?pid=2026
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
		s[0]=s[0]+'A'-'a';
		for(int i=1;i<len-1;i++)
		{
			if(s[i]==' '&&s[i+1]!=' ')
			{
				s[i+1]=s[i+1]+'A'-'a';
			}
		}
		for(int i=0;i<len;i++)
		{
			cout<<s[i];
		}
		cout<<endl;
	} 
	return 0;
}