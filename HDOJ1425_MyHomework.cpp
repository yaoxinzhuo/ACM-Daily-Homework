/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1425
*/

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int a[1000001];

bool cmp(int a,int b)
{
	if(a>b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n,m,i;
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n,cmp);
		for (i=0;i<m-1;i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[i]);
	}
	return 0;
}