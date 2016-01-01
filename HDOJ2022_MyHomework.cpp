/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2022
*/
#include<iostream>
using namespace std;
int a[1005][1005];
int b[1005][1005];
int c[1][1005];

int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		for(int i=1;i<=x;i++)
		{
			a[i][0]=0;
			for(int j=1;j<=y;j++)
			{
				cin>>a[i][j];
				if(a[i][j]<0)
				{
					b[i][j]=-a[i][j];
				}
				else
				{
					b[i][j]=a[i][j];
				}
				if(b[i][j]>a[i][0])
				{
					a[i][0]=b[i][j];
					c[0][i]=i;
					c[1][i]=j;
				}
			}
		}
		int max=0,xx,yy;
		for(int i=1;i<=x;i++)
		{
			if(max<a[i][0])
			{
				max=a[i][0];
				xx=c[0][i];
				yy=c[1][i];
			}
		}
		cout<<xx<<" "<<yy<<" "<<a[xx][yy]<<endl;
	}
	return 0;
}