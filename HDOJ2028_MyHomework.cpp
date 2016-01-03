//http://acm.hdu.edu.cn/showproblem.php?pid=2028
#include<iostream>
#include<cstring>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(a%b==0)
	{
		return b;
	}
	else
	{
		return gcd(b,a%b);
	}
} 
long long int lcm(long long int a,long long int b)
{
	return a*b/gcd(a,b);
}
int main()
{
	int n;
	long long int  t;
    long long int result;
	while(cin>>n)
	{
		result=1;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			result=lcm(result,t);
		}
		cout<<result<<endl;
	}
	return 0;
}
