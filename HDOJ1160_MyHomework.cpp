/*
	*Porblem Description
	FatMouse believes that the fatter a mouse is, the faster it runs. To disprove this, 
you want to take the data on a collection of mice and put as large a subset of this data
as possible into a sequence so that the weights are increasing, but the speeds are decreasing.

	*Input
	Input contains data for a bunch of mice, one mouse per line, terminated by end of file.
The data for a particular mouse will consist of a pair of integers: the first representing its 
size in grams and the second representing its speed in centimeters per second. Both integers are 
between 1 and 10000. The data in each test case will contain information for at most 1000 mice.
Two mice may have the same weight, the same speed, or even the same weight and spee.

	*Output
	Your program should output a sequence of lines of data; the first line should contain a number n; 
the remaining n lines should each contain a single positive integer (each one representing a mouse). 
If these n integers are m[1], m[2],..., m[n] then it must be the case that 
W[m[1]] < W[m[2]] < ... < W[m[n]]
and 
S[m[1]] > S[m[2]] > ... > S[m[n]]
In order for the answer to be correct, n should be as large as possible.
All inequalities are strict: weights must be strictly increasing, and speeds must be strictly decreasing. 
There may be many correct outputs for a given input, your program only needs to find one. 
	
	*Sample Input
	6008 1300
	6000 2100
	500 2000
	1000 4000
	1100 3000
	6000 2000
	8000 1400
	6000 1200
	2000 1900
	
	*Sample Output
	4
	4
	5
	9
	7
	//My Output is 
	4
	4
	5
	9
	8
*/
#include<iostream>
#include<algorithm>
using namespace std;

class Mouse
{
public:
    int order;
    int weight;
    int speed;
}m[1001];

bool cmp(const Mouse &a,const Mouse &b)
{
    if(a.weight<b.weight)
    {
        return true;
    }
    else if (a.weight==b.weight&&a.speed>b.speed)
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
    int w,s,i;
    int pre[1001];
    int dp[1001];
    int res[1001];
    //memset(pre,0,sizeof(pre));
    dp[1]=1;
    i=1;
    pre[0]=0;
    dp[0]=0;
    while(cin>>w>>s)
    {
        dp[i]=1;
        pre[i]=0;
        m[i].order=i;
        m[i].weight=w;
        m[i].speed=s;
        i++;
    }
    sort(m+1,m+i,cmp);
    
    int maxlen=0;
    int max;
    for(int p=1;p<i;p++)
    {
        for(int q=1;q<p;q++)
        {
            if((m[p].weight>m[q].weight) && (m[p].speed<m[q].speed) && dp[q]+1>dp[p] )
            {
                dp[p]=dp[q]+1;
                pre[p]=q;
                if(dp[p]>maxlen)
                {
                    max=p;
                    maxlen=dp[p];
                }
            }
        }
    }
    i=0;
    int t=max;
    while(t!=0)
    {
        res[i++]=t;
        t=pre[t];
    }
    cout<<i<<endl;
    i-=1;
    while(i>=0)
    {
        cout<<m[res[i]].order<<endl;
        i--;
    }
    return 0;
}