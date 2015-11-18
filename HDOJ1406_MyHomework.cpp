/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1406
*/

#include<iostream>
#include<cmath>
using namespace std;

bool a[10005];

bool IsFull(int n)
{
	int temp=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			temp+=i;
		}
	}
	if(temp==n)
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
	int n,num1,num2,sum,i;
	for(int i=2;i<10001;i++)
	{
		a[i]=IsFull(i);
	}
	cin>>n;
	while(n--)
	{
		sum=0;
		cin>>num1>>num2;
		if(num1>num2)
		{
			int t=num1;
			num1=num2;
			num2=t;
		}
		for(i=num1;i<=num2;i++)
		{
			if(a[i])
			{
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}