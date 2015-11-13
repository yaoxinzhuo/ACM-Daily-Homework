/*
	*Problem Description
	There are several towers shouwn in the following and it has n layer.If each step can only
go to adjacent node,then the number of nodes through the number and the maximum number?

	*Input
	First input integer C,C tests.The first line of each test case is an integer N(1<=N<=100).The
height of column number.The next N lines are the number of towers.I-th row has a i-th integer,and
all integers are from 0 to 99.
	
	*Output
	For each test,output possible max sum,each resulst one line.
	
	*Sample Input
	1
	5
	7
	3 8
	8 1 0 
	2 7 4 4
	4 5 2 6 5
	
	*Sample Output
	30
	
*/
#include<iostream>
using namespace std;
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
} 
int main()
{
	int C,N;
	cin>>C;
	int* a[101];
	for(int i=1;i<101;i++)	
	{
		a[i]=new int[i+1]; 
	}
	while(C--)
	{
		cin>>N;
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=i;j++)
			{
				cin>>a[i][j];
				//cout<<a[i][j];
			}
		}
		for(int i=N-1;i>0;i--)
		{
			for(int j=1;j<=i;j++)
			{
				a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
			}
		}
		cout<<a[1][1]<<endl;
	}
	return 0;
}