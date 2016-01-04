//http://acm.hdu.edu.cn/showproblem.php?pid=2030
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int C;
	cin>>C;
	getchar();
	char s[1001];
	int count;
	while(C--)
	{
		gets(s);
		count=0;
		int length=strlen(s);
		for(int i=0;i<length;i++)
		{
			if(s[i]<0)
			{
				count++;
			}
		}
		cout<<count/2<<endl;
	}
	return 0;
}
