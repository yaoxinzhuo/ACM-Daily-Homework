//http://acm.hdu.edu.cn/showproblem.php?pid=2032
#include<iostream>
using namespace std;
long long int a[31][31];
int main()
{
	a[1][1]=1;
	a[2][1]=1;
	a[2][2]=1; 
	for(int i=3;i<31;i++)
	{
		a[i][1]=1;
		for(int j=2;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		a[i][i]=1;
	}
	int kongge=0;
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i][1];
			for(int j=2;j<i;j++)
			{
				cout<<" "<<a[i][j];
			}
			if(i!=1)
			{
				cout<<" "<<a[i][i];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
