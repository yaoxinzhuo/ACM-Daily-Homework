/*
	*Problem's link:
	http://acm.hdu.edu.cn/showproblem.php?pid=2015
*/
#include<iostream>
//#include<algorithm>
//#include<iomanip>
using namespace std;
int main()
{
	int a[101];
	a[0]=0;
	int n,m,sum;
	for(int i=1;i<101;i++)
	{
		a[i]=2*i;
	}
	while(cin>>n>>m)
	{
		int all=1;
		int clock=0;
		while(1)
		{
			sum=0;
			clock=1;
			while(clock!=(m+1))
			{
				if(all==(n+1))
				{
					break;
				}
				sum+=a[all++];
				clock++;
			}
			if(all!=(n+1))
			{
				cout<<(sum/(clock-1))<<" ";
			}
			else
			{
				cout<<(sum/(clock-1))<<endl;
				break;
			}
		}
	}
	return 0;
}