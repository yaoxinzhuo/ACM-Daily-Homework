//http://acm.hdu.edu.cn/showproblem.php?pid=2033
#include<iostream>
using namespace std;

void cal(int & a,int & b,int &c,int &ta,int &tb,int &tc)
{
	if( (c+tc)<60 )
	{
		c=c+tc;
	}
	else
	{
		b+=(c+tc)/60;
		c=(c+tc)%60;
	}
	if(  (b+tb)<60 )
	{
		b=b+tb;
	}
	else
	{
		a+=(b+tb)/60;
		b=(b+tb)%60;
	}
	a+=ta;
	return;
}

int main()
{
	int n;
	int ta,tb,tc,a,b,c;
	int ra,rb,rc;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>ta>>tb>>tc;
		cal(a,b,c,ta,tb,tc);
		cout<<a<<" "<<b<<" "<<c<<endl; 
	}
	return 0;
}
