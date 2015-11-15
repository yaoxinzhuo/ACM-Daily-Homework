/*
	*Problem Description
	Given a sequence a[1],a[2],a[3]......a[n], your job is to calculate the 
max sum of a sub-sequence. For example, given (6,-1,5,4,-7), the max sum in 
this sequence is 6 + (-1) + 5 + 4 = 14.

	*Input
	The first line of the input contains an integer T(1<=T<=20) which means 
the number of test cases. Then T lines follow, each line starts with a number 
N(1<=N<=100000), then N integers followed(all the integers are between -1000 and 1000).
	
	*Output
	For each test case, you should output two lines. The first line is "Case #:", # 
means the number of the test case. The second line contains three integers, the Max 
Sum in the sequence, the start position of the sub-sequence, the end position of the 
sub-sequence. If there are more than one result, output the first one. Output a blank 
line between two cases.
	
	*Sample Input
	2
	5 6 -1 5 4 -7
	7 0 6 -1 1 -6 7 -5
	
	*Sample Output
	Case 1:
	14 1 4
	
	Case 2:
	7 1 6
*/
#include<iostream>
using namespace std;
int a[100001];
int main()
{
	int T,N;
	cin>>T;
	for(int order=1;order<=T;order++)
	{
		cin>>N;
		for(int i=1;i<=N;i++)
		{
			cin>>a[i];
		}
		int sum=0,max=-99999,curhead=1,rear=1,head=1;
		for(int i=1;i<=N;i++)
		{
			if(sum<0)
			{
				curhead=i;
				sum=a[i];
			}
			else
			{
				sum+=a[i];
			}
			if(sum>max)
			{
				rear=i;
				head=curhead;
				max=sum;
			}
		}
		
		cout<<"Case "<<order<<":"<<endl;
		cout<<max<<" "<<head<<" "<<rear<<endl;
		if(order!=T)
		{
			cout<<endl;
		}
	}
	return 0;
}