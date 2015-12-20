/*
	Problem's link:
	http://acm.hdu.edu.cn/showproblem.php?pid=2013
*/
#include<iostream>
using namespace std;
int main()
{
	int a[31];
	a[1]=1;
	for(int i=2;i<31;i++)
	{
		a[i]=(a[i-1]+1)*2;
	}
	int n;
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}