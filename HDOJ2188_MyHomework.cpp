//http://acm.hdu.edu.cn/showproblem.php?pid=2188
#include<iostream>
using namespace std;

int main()
{
	int C;
	cin>>C;
	int n,m;
	while(C--)
	{
		cin>>n>>m;
		if(n%(m+1)==0)
		{
			cout<<"Rabbit"<<endl;
		}
		else
		{
			cout<<"Grass"<<endl;
		}
	}
	return 0;
}
