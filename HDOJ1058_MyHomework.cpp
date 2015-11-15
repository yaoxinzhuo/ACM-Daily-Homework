/*
	Dynamic Programming.
	http://acm.hdu.edu.cn/showproblem.php?pid=1058
*/

#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int f[5843];
bool m[4];

int min(int q, int w, int e, int r)
{
	int mi;
	mi = min( min(q,w), min(e,r));
	for(int i=0; i<4; i++ )
		m[i] = false;
	if ( mi == q ) m[0] = true;
	if ( mi == w ) m[1] = true;
	if ( mi == e ) m[2] = true;
	if ( mi == r ) m[3] = true;
	return mi;
}

int main()
{
	int q,w,e,r;
	int n;
	string fix;
	q=w=e=r= 1; 
	f[1] = 1;
	for(int i=2; i<=5842; i++ )
	{
		f[i] = min( f[q]*2, f[w]*3, f[e]*5, f[r]*7 );
		if ( m[0] )  q++;
		if ( m[1] )  w++;
		if ( m[2] )  e++;
		if ( m[3] )  r++;
	}

	while( cin >> n && n!=0 )
	{
		if( n%10==1 && n%100!=11 )
			fix = "st";
		else if( n%10 == 2 && n%100 != 12 )
			fix = "nd";
		else if( n%10 == 3 && n%100 != 13 )
			fix = "rd";
		else
		{	
			fix = "th";
		}
		
		cout << "The " << n << fix << " humble number is " << f[n] << "." << endl;
	}
    return 0;
}