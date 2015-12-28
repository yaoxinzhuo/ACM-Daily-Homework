/*
	*Problem's link:
	http://acm.hdu.edu.cn/showproblem.php?pid=2016
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		int a[n];
		int f;
		int min=99999999999999999;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<min)
			{
				f=i;
				min=a[i];
			}
		}
		int t=a[0];
		a[0]=a[f];
		a[f]=t;
		for(int i=0;i<(n-1);i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<endl;
	}
	return 0;
}