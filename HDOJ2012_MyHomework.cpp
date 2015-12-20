/*
	Problem's link:
	http://acm.hdu.edu.cn/showproblem.php?pid=2012
*/
#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n)
{
	bool f =true;
	if(n==2)
	{
		return true;
	} 
	for(int i= 2;i <=sqrt(n);i++ )
	{
		if(n%i == 0)
		{
			f=false;
			break;
		}
	}
	return f;
} 

int main()
{
	bool a[90];
	int x,y;
	int t;
	for(int i=0;i<90;i++)
	{
		t=i-39;
		a[i]=prime(t*t+t+41);
	}
	bool temp=true;
	while((cin>>x>>y))
	{
		if(x==0&&y==0)
		{
			break;
		}
		temp=true;
		for(int i=x;i<=y;i++)
		{
			if(a[i+39]==false)
			{
				temp=false;
			}
		}
		if(temp==true)
		{
			cout<<"OK"<<endl;
		}
		else
		{
			cout<<"Sorry"<<endl;
		}
	}
	return 0;
}