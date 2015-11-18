/*
	*Problem's link:
	http://acm.hdu.edu.cn/showproblem.php?pid=2039
*/

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int M;
	double a[3];
	scanf("%d",&M);
	while(M--)
	{
		scanf("%lf%lf%lf",&a[0],&a[1],&a[2]);
		sort(a,a+2);
		if(a[0]+a[1]>a[2]&&a[0]+a[2]>a[1])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}