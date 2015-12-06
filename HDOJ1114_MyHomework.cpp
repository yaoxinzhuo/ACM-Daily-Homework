/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1114
*/

#include<iostream>
using namespace std;
const int inf = 1000000;
class coin
{
public:
	int val;
	int wei;
};
int min(int a,int b)
{
	return a<b?a:b;
}
int main()
{
	int T,E,F,N,weight;
	int f[10001];
	coin *coins = new coin [501];
	cin>>T;
	while(T--)
	{
		cin>>E>>F;//1<=E<=F<=10000
		weight=F-E;
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>coins[i].val>>coins[i].wei;
		}
		f[0]=0;
		for(int i=1;i<=weight;i++)
		{
			f[i]=inf;
		}
		for(int i=0;i<N;i++)
		{
			for(int j=coins[i].wei;j<=weight;j++)
			{
				f[j]=min(f[j],f[j-coins[i].wei]+coins[i].val);
			}
		}
		if(f[weight]<inf)
		{
			cout<<"The minimum amount of money in the piggy-bank is "<<f[weight]<<"."<<endl;
		} 
		else
		{
			cout<<"This is impossible."<<endl;
		}
	}
	return 0;
}