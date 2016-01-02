/*
	http://acm.hdu.edu.cn/showproblem.php?pid=2023
*/

#include<iostream>
#include<cstdio>

using namespace std;

class student
{
public:
	int score[6];
	double scores;
	bool ok;
	student()
	{
		for(int i=0;i<6;i++)
		{
			score[i]=0;
		}
		ok=true;
		scores=0.0;
	}
}; 

int main()
{
	int n,m;
	int t;
	while(cin>>n>>m)
	{
		student* s = new student[n+1];
		double avescore[m+1];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>t;
				s[i].score[j]=t;
				s[i].scores+=1.0*t;
			}
			s[i].scores/=(1.0*m);
		}
		double t;
		for(int j=1;j<=m;j++)
		{
			t=0.0;
			for(int i=1;i<=n;i++)
			{
				t+=s[i].score[j];
			}
			avescore[j]=1.0*t/n;
		}
		int all=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(s[i].score[j]<avescore[j])
				{
					s[i].ok=false;
				}
			}
			if(s[i].ok==true)
			{
				all++; 
			}
		}
		for(int i=1;i<n;i++)
		{
			printf("%.2lf",s[i].scores);
			cout<<" ";
		}
		printf("%.2lf",s[n].scores);
		cout<<endl;
		
		//printf("%.2lf\n",s[n].scores);
		for(int j=1;j<m;j++)
		{
			printf("%.2lf",avescore[j]);
			cout<<" ";
		}
		printf("%.2lf",avescore[m]);
		cout<<endl;
		
		//printf("%.2lf",avescore[m]);cout<<" ";
		cout<<all<<endl;
		cout<<endl;
	}
	return 0;
}