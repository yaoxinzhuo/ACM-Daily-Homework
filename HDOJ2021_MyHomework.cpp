/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2021
*/
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int num;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		num=0;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]>=100)
			{
				num+=(a[i]/100);
				a[i]=a[i]%100;
			}
			if(a[i]>=50)
			{
				num+=(a[i]/50);
				a[i]=a[i]%50;
			}
			if(a[i]>=10)
			{
				num+=(a[i]/10);
				a[i]=a[i]%10;
			}
			if(a[i]>=5)
			{
				num+=(a[i]/5);
				a[i]=a[i]%5;
			}
			if(a[i]>=2)
			{
				num+=(a[i]/2);
				a[i]=a[i]%2;
			}
			if(a[i]>=1)
			{
				num+=(a[i]/1);
				a[i]=a[i]%1;
			}
		}
		cout<<num<<endl;
	}
	return 0;
}