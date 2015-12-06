/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1004
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(const string &a,const string &b)
{
	if(a<b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int N,n;
	while(cin>>N)
	{
		if(N==0)
		{
			break;
		}
		else
		{
			int t=1;
			int max=0;
			string st=" ";
			string maxs=" ";
			string s[1005];
			for(int i=0;i<N;i++)
			{
				cin>>s[i];
			}
			sort(s,s+N,cmp);
			maxs=st=s[0];
			for(int i=1;i<N;i++)
			{
				if(s[i]==st)
				{
					t++;
				}
				else
				{
					if(t>max)
					{
						maxs=s[i-1];
						max=t;
					}
					st=s[i];
					t=1;
				}
			}
			if(t>max)
			{
				maxs=s[N-1];
			}
			cout<<maxs<<endl;
		}
	}
	return 0;
}