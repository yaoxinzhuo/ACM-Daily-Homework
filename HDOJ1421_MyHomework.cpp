/*
	Problem's link:
	http://acm.hdu.edu.cn/showproblem.php?pid=1421
	
	A problem used dynamic programming
*/
include<iostream>
#include<algorithm>
using namespace std;

int dp[2005][2005];
int a[2001];

int main()
{
	int n,k;

	while(cin>>n>>k)
	{
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		/*for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}*/
		for(int i=2;i<=n;i++)
		{
			int l=i/2;
			for(int j=1;j<=l;j++)
			{
				if(i==j*2)
				{
					dp[i][j]=dp[i-2][j-1]+(a[i]-a[i-1])*(a[i]-a[i-1]);
				}
				else
				{
					dp[i][j]=min(dp[i-1][j],dp[i-2][j-1]+(a[i]-a[i-1])*(a[i]-a[i-1]));
				}
			}
		}
		cout<<dp[n][k]<<endl;
	}
	return 0;
}