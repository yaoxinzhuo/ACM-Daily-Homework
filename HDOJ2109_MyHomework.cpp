/*
	*Problem Description
	Two team battle.Every team has n palyers.Match order is from weak to strong.Win can
get two scores.Lose get zero score.Else everyteam could get one score.
	
	*Input
	first input n.Express has n datas.(n<100)
	then two lines.Every lines include n integers,means the our team and other team' players 
capacity.If input 0,end.

	*Output
	For every input,output the result of match.Sample is like Sample Output.There is only one 
space between the number and the "vs".

	*Sample Input
	3
	5 2 6
	1 3 4
	0
	
	*Sample Output
	6 vs 0
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if (n == 0)
		{
			break;
		}
		else
		{
			int hdu[n];
			int oth[n];
			for (int i=0; i<n; i++)
			{
				cin>>hdu[i];
			}
			for (int i=0; i<n; i++)
			{
				cin>>oth[i];
			}
			sort(hdu,hdu+n);
			sort(oth,oth+n);
			int hscore = 0;
			int oscore = 0;
			for(int i=0; i<n; i++)
			{
				if (hdu[i]>oth[i])
				{
					hscore += 2;
				}
				else
				{
					if(hdu[i]<oth[i])
					{
						oscore +=2;
					}
					else
					{
						hscore += 1;
						oscore += 1;
					}
				}
			}
			cout<<hscore<<" vs "<<oscore<<endl;
		}
	}
	return 0;
}