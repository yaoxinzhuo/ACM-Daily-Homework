/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2020
*/
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

class num
{
public:
	int number;
	int val;
};

bool cmp(const num& a,const num& b)
{
	if(a.val>b.val)
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
	int n;
	while(cin>>n) 
	{
		if(n==0)
		{
			break;
		} 
		num* a = new num[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i].number;
			a[i].val=fabs(a[i].number);
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n-1;i++)
		{
			cout<<a[i].number<<" ";
		}
		cout<<a[n-1].number<<endl;
	}
	return 0;
}