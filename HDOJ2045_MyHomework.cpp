/*
	*Problem Description
	Now there is a n squares in one line,with red,pink,green color each square,every square has
one color,require that adjacent squares have different color,and first and last square also shou-
ld be different.
	
	*Input
	Input tests,every test used one line,input N everytime(0<N<=50
	
	*Output
	For every test,output the coating methods per line.
	
	*Sample Input
	1
	2
	
	*Sample Output
	3
	6
	
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int a[55];
    a[1]=3;
    a[2]=6;
    a[3]=6;
    for(int i=4;i<=50;i++)
    {
        a[i]=a[i-1]+a[i-2]*2;
    }
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
