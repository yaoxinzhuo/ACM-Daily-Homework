/*
	*Problen's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2007
	
*/

#include<iostream>
using namespace std;

unsigned long long int r[1001];

int main()
{
	for(int i=0;i<1001;i+=2)
	{
		r[i]=i*i;
	}
	for(int i=1;i<1001;i+=2)
	{
		r[i]=i*i*i;
	}
	int a,b;
	unsigned long long int r1=0,r2=0;
	while(cin>>a>>b)
	{
		if(a>b)
		{
			int t=a;
			a=b;
			b=t;
		}
		r1=r2=0;
		for(int i=a;i<=b;i++)
		{
			if(r[i]%2==0)
			{
				r1+=r[i];
			}			
			else
			{
				r2+=r[i];
			}
		}
		cout<<r1<<" "<<r2<<endl;
	}
	return 0;
}