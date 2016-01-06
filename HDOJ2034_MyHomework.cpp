//http://acm.hdu.edu.cn/showproblem.php?pid=2034
#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
		{
			break;
		}
		else
		{
			int a[n];
			bool fa[n];
			int b[m];
			int t=m+n;
			bool fff=true;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				fa[i]=true;
			}
			for(int j=0;j<m;j++)
			{
				cin>>b[j];
			}
			sort(a,a+n);
			sort(b,b+m);
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(a[i]==b[j])
					{
						fa[i]=false;
						break;
					}
				}
				if(fa[i])
				{
					fff=false;
					cout<<a[i]<<" ";
				}
			}
			if(fff==true)
			{
				cout<<"NULL"<<endl;
			}
			else
			{
				cout<<endl;
			}
		}
	}
	return 0;
}
