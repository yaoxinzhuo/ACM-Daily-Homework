/*
	*Problem Description
	Calculate the result of (A^B)%C,(A,B,C<=1000000)
	
	*Input
	First input N,means that has N tests,then N lines datas,each has A,B,C;
	
	*Output
	The result of (A^B)%C,one result per line
	
	*Sample Input
	3
	2 3 4
	3 3 5
	4 4 6
	
	*Sample Output
	0
	2
	4
*/
#include<iostream>
#include<algorithm>
using namespace std;
//Quick divide power
int main()
{
	long long int N;
	long long int a,b,c;
	cin>>N;
	while(N--)
	{
		cin>>a>>b>>c;
		long long int r=1%c;
		for(;;)
		{
			if(b==0)
			{
				break;
			}
			if((b%2)==0)
			{
				b/=2;
				a=(a*a)%c;
			}
			else
			{
				r=(r*a)%c;
				b-=1;
			}
		}
		cout<<r<<endl;
	} 
	return 0;
}
