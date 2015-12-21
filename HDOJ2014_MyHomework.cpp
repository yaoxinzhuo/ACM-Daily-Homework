/*
	Problem's link:
	http://acm.hdu.edu.cn/showproblem.php?pid=2014
*/
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
bool cmp(const int &a,const int &b)
{
	return a<b?true:false;
}
int main()
{
	int n;
	double sum;
	while(cin>>n)
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		sum=0.0;
		for(int i=1;i<n-1;i++)
		{
			sum+=a[i];
		}
		sum=sum/(n-2);
		cout<<fixed<<setprecision(2);
		cout<<sum<<endl;
	}
	return 0;
}