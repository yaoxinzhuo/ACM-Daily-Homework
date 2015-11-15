/*
	http://acm.hdu.edu.cn/showproblem.php?pid=4540
	dynamic programming
*/
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;

int a[31][21];
int dp[31][31];

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        for(int i=0;i<n;i++)
          for(int j=0;j<k;j++)
            cin>>a[i][j];
            
        for(int j=0;j<k;j++)
		{
			dp[0][j]=0;
		}		
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                dp[i][j]=dp[i-1][0]+abs(a[i][j]-a[i-1][0]);
                for(int x=1;x<k;x++)
                  dp[i][j]=min(dp[i][j],dp[i-1][x]+abs(a[i][j]-a[i-1][x]));
            }
        }
        int ans=dp[n-1][0];
        for(int i=1;i<k;i++)ans=min(ans,dp[n-1][i]);
        cout<<ans<<endl;
    }
    return 0;
}