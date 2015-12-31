/*
	http://acm.hdu.edu.cn/showproblem.php?pid=1232
*/
#include<iostream>
using namespace std;

int father[1005];

int findf(int n)
{
	if(father[n]!=n)
	{
		father[n]=findf(father[n]);
	}
	return father[n];
}

int main()
{
	int n,m;
	int sum,x,y;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		cin>>m;
		for(int i=1;i<=n;i++)
		{
			father[i]=i;
		}
		sum=n-1;
		while(m--)
		{
			cin>>x>>y;
			if(findf(x)!=findf(y))
			{
				father[findf(y)]=findf(x);
				sum--;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}