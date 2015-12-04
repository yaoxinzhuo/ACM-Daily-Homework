/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2602
*/

#include<iostream>
#include<algorithm>
using namespace std;
int a[1001][1001];
int val[1001];
int vol[1001];
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int T,N,V,i,j,MAX;
	cin>>T;
	while(T--)
	{
		cin>>N>>V;
		MAX=-1;
		for(i=1;i<=N;i++)
		{
			cin>>val[i];
		}
		for(i=1;i<=N;i++)
		{
			cin>>vol[i];
		}
		for(i=0;i<=V;i++)
		{
			a[0][V]=0;
		}
		for(i=1;i<=N;i++)
		{
			for(j=0;j<=V;j++)
			{
				if(j-vol[i]>=0)
				{
					a[i][j]=max(a[i-1][j],a[i-1][j-vol[i]]+val[i]);
				}
				else
				{
					a[i][j]=a[i-1][j];
				}
				if(a[i][j]>=MAX)
				{
					MAX=a[i][j];
				}
			} 
		}
		cout<<MAX<<endl;
	}
	return 0;
}
