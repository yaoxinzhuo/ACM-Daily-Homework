/*
	The problme based on a story about old woman in Wenchuan's earthquake in 2008.
	It'a typical problem about greedy algorithm.
	
	*Problem Description
	Now we assumed that we have money to buy rice.If the market has m types rice,and we know different rice'
	Unit Price and weight.How many rice we could buy most?
	
	*Input
	First input C, experssed has C tests,the first line of each test has two integers n and m(0<n<=1000,0<m<=1000),
	represent the Unit Price and weight.Then the m rows of data,each line contains two integers p and h(1<=p<=25,
	1<=h<=100),they are the Unit Price and weight.
	
	*Output
	For each set of test data,the output can purchase a maximum weight of rice(you can assume that all of the funds to
	buy rice.The output of each row for instance,to retain two decimal places.)
	
	*Sample Input
	1
	7 2
	3 3
	4 4
	
	*Sample Output
	2.33
*/
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

class Rice
{
public:
	int p;//p is the Unit Price;
	int h;//h is the rice weight;
};

bool cmp(const Rice& a,const Rice& b)
{
	if(a.p<b.p)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int C;
	cin>>C;
	Rice r[1001];
	while(C--)
	{
		int m,n;
		cin>>n>>m;
		for(int i=0; i<m; i++)
		{
			cin>>r[i].p>>r[i].h;
		}
		sort(r,r+m,cmp);
		double result = 0.0;
		for(int i = 0; i<m; i++)
		{	
			if(n >= ((r[i].p)*(r[i].h)))
			{
				n -= r[i].p*r[i].h;
				result += 1.0*r[i].h;
			}
			else
			{
				result += 1.0*(1.0*n/(1.0*r[i].h*r[i].p))*(1.0*r[i].h);
				break;
			}
		}
		cout<<fixed<<setprecision(2)<<result<<endl;
	}
	return 0;
}