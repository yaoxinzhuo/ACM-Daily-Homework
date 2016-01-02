/*
	http://acm.hdu.edu.cn/showproblem.php?pid=1214
*/
#include<iostream>
using namespace std;
int a[32768];
int main()
{
	for(int i=1;i<32768;i++)
	{
		a[i]=(i/2)*(i/2-1)/2+(i-i/2)*(i-i/2-1)/2;
	}
	int t;
	while(cin>>t)
	{
		cout<<a[t]<<endl;
	}
	return 0;
}