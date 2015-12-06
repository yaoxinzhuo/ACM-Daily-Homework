/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2001
*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    cout<<fixed;
    cout<<setprecision(2);
    double x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        cout<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<<endl;
    }
    return 0;
}