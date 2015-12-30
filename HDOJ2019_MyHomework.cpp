/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2019
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
		{
			break;	
		}
		int a[n+1];
		for(int i =0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=m;
		sort(a,a+n+1);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<a[n]<<endl;
	}
	return 0;
}
