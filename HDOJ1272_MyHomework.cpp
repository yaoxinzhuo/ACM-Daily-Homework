//http://acm.hdu.edu.cn/showproblem.php?pid=1272
#include<iostream>

using namespace std;

bool judge[100005];

int main()
{
	int point=0;
	int edge=0;
	int a,b;
	for(int i=0;i<100005;i++)
	{
		judge[i]=false;
	}
	while(cin>>a>>b)
	{
		if(a==0 && b==0 )
		{
			if(edge==(point-1)||point==0)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
			for(int i=0;i<100005;i++)
			{
				judge[i]=false;
			}
			point = 0;
			edge = 0;
			getchar();
			continue;
		}
		if(a == -1 && b == -1)
		{
			break;
		}
		
			edge++;
			if(judge[a]==false)
			{
				point++;
				judge[a]=true;
			}
			if(judge[b]==false)
			{
				point++;
				judge[b]=true;
			}
	}
	return 0;
}
