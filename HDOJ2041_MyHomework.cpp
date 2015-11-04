/*
	*Problem Description
	There are a total of M-class staircase, at the beginning you are in the first stage, 
if you can only step onto the primary or secondary, to go first M-Class, the total number 
of kinds of moves?

	*Input
	First input an integer N,the number of test cases,followed by N rows,each row contains an
integer M(1<=M<=40),showing the stairs series.

	*Output
	for each test M,output the number of moves
	
	*Sample Input
	2
	2
	3
	
	*Sample Output
	1
	2
	
*/

#include<iostream>
using namespace std;
int main()
{
	int a[41];
	a[1]=1;
	a[2]=1;
	a[3]=2;
	for(int i=4; i<=40; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	int T;
	cin>>T;
	while (T--)
	{
		int M;
		cin>>M;
		cout<<a[M]<<endl;
	}
	return 0;
}