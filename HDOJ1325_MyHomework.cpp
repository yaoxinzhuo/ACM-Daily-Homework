//http://acm.hdu.edu.cn/showproblem.php?pid=1325
#include<iostream>

using namespace std;

bool judge[100005];
bool judgepoint[100005];

int main()
{
	int point=0;
	int edge=0;
	int a,b;
	int Case=0;
	for(int i=0;i<100005;i++)
	{
		judge[i]=false;
		judgepoint[i]=false;
	}
	while(cin>>a>>b)
	{
		if(a==0 && b==0 )
		{
			if(edge==(point-1)||point==0)
			{
				Case++;
				//cout<<edge<<" "<<point<<endl;
				cout<<"Case "<<Case<<" is a tree."<<endl;
			}
			else
			{
				Case++;
				//cout<<edge<<" "<<point<<endl;
				cout<<"Case "<<Case<<" is not a tree."<<endl;
			}
			for(int i=0;i<100005;i++)
			{
				judge[i]=false;
				judgepoint[i]=false;
			}
			point = 0;
			edge = 0;
			continue;
		}
		if(a == -1 && b == -1)
		{
			break;
		}
		if(judgepoint[a]==false)
		{
			point++;
			judgepoint[a]=true;
		}
		if(judgepoint[b]==false)
		{
			point++;
			judgepoint[b]=true;
		}
		if(judge[b]==false)
		{
			judge[b]=true;
			edge++;
		}
		else
		{
			edge=-999999;
		}
	}
	return 0;
}
