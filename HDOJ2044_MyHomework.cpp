/*
	*Problem Description
	A trained bees can only climb to the right side of the adjacent hive, cann't reverse
crawling.Calculate the beens from the bee.

	*Input
	first line input N,describe N tests.Then N lines,every line includes integer a and b
(0<a<b<50)
	
	*Output
	For every case,output the possible lines from a to b,every result for a line.
	
	*Sample Input
	2
	1 2
	3 6
	
	*Sample Output
	1
	3
	
*/

#include<iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    long long int cases[55][55];

    for(int i=1;i<=50;i++)
    {
        cases[i][i+1]=1;
        cases[i][i+2]=2;
    }
    for(int i=1;i<=50;i++)
    {
        cases[i][i]=1;
    }
    for(int i=1;i<=50;i++)
    {
        for(int j=1;j<i;j++)
        {
            cases[i][j]=0;
        }
    }
    for(int i=1;i<=50;i++)
    {
        for(int j=i+2;j<=50;j++)
        {
            cases[i][j]=cases[i][j-1]+cases[i][j-2];
        }
    }

    while(N--)
    {
        int a,b;
        cin>>a>>b;
        cout<<cases[a][b]<<endl;
    }
    return 0;
}