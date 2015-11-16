/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1215
	
	used all possible factors and ergodic
*/
#include<iostream>
using namespace std;

int a[500001];

int main()
{
	a[1]=1;
	int T,N,i,j;
	for(i=1;i<=250000;i++)//Ergodic all factors(max is 50000,so end 25000)
	{
		for(j=2*i;j<=500000;j+=i) //Not include itself,so start wih
		{
			a[j]+=i;
		}
	}
	cin>>T;
	while(T--)
	{
		cin>>N;
		cout<<a[N]<<endl; 
	}
	return 0;
}