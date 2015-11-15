/*
	*Problem Description
	A subsequence of a given sequence is the given sequence with some elements 
(possible none) left out. Given a sequence X = <x1, x2, ..., xm> another sequence 
Z = <z1, z2, ..., zk> is a subsequence of X if there exists a strictly increasing 
sequence <i1, i2, ..., ik> of indices of X such that for all j = 1,2,...,k, xij = zj. 
For example, Z = <a, b, f, c> is a subsequence of X = <a, b, c, f, b, c> with index 
sequence <1, 2, 4, 6>. Given two sequences X and Y the problem is to find the length 
of the maximum-length common subsequence of X and Y. 
The program input is from a text file. Each data set in the file contains two strings 
representing the given sequences. The sequences are separated by any number of white spaces. 
The input data are correct. For each set of data the program prints on the standard output 
the length of the maximum-length common subsequence from the beginning of a separate line.

	*Sample Input
	abcfbc abfcab
	programming contest 
	abcd mnp
	
	*Sample Output
	4
	2
	0
	
*/
#include<iostream>
#include<string>
using namespace std;

int max(int a,int b)
{
	return a>b?a:b;
}

int cal(string s1,string s2)
{
	if(s1.empty()||s2.empty())
	{
		return 0;
	}
	else
	{
		int m=s1.length();
		int n=s2.length();
		int dp[m+2][n+2];
		for(int i=0;i<=m;i++)
		{
			dp[i][0]=0;
		}
		for(int i=0;i<=n;i++)
		{
			dp[0][i]=0;
		}
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(s1[i]==s2[j])
				{
					dp[i+1][j+1]=dp[i][j]+1;
				}
				else
				{
					dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
				}
			}
		}
		return dp[m][n];
	}
}

int main()
{
	string s1,s2;
	int result;
	while(cin>>s1>>s2)
	{
		result=cal(s1,s2);
		cout<<result<<endl;
	}
	return 0;
}