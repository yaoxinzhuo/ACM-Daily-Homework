/*
	*Problem Description
	gameboy could receive some pies in a narrow line.The line has 11 points(0,1...10).
In order to simplify the problem,it is assumed that in the next time, the pie is dropped
to the 11 positions in 0-10,At the start ,gameboy stand in 5 point,every second he could
move one step,so in the first second,he could go 4 or 6 or stay in 5.How many pies can 
gameboy receive?(Suppose his bag is enough big)
	
	*Input
	Input has many cases.Every data first line is an integer n(0<n<100000),express n pies 
dropp in the line.In the next line,everyline has two integer x,T(0<T<100000),express T-th
second has one pie dropp in x point,One secon  may be dropped many pies.n=9 is the end.
	
	*Output
	For each Input output one result,output an integer m,express gameboy could get m pies max.
Notice:cin may be run_time_error.Suggest use scanf.

	*Sample Input
	6
	5 1
	4 1
	6 1
	7 2
	7 2
	8 3
	0
	
	*Sample Output
	4
	
*/

#include<iostream>
using namespace std;

int dp[100005][12];

int max(int a,int b,int c)
{
	return a>b?(a>c?a:c):(b>c?b:c);
}

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int n,root;
	int x,T,j;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			memset(dp,0,sizeof(dp));
		    root = 0;

			for(int i=0;i<n;i++)
			{
				cin>>x>>T;
				dp[T][x]+=1;
				if(root<=T)
				{
					root=T;
				}
			}
			root--;
			for(;root>=0;root--)
			{
				for(j=1;j<=9;j++)
				{
					dp[root][j]+=max(dp[root+1][j-1],dp[root+1][j],dp[root+1][j+1]);
				}
				dp[root][0]+=max(dp[root+1][0],dp[root+1][1]);
				dp[root][10]+=max(dp[root+1][9],dp[root+1][10]);
			}
			
			cout<<dp[0][5]<<endl;
		}
	}
	return 0;
}