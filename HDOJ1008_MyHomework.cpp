/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1008
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n>0)
    {
        int time=0;
        int now=0;
        int goal;
        int ttime;
        while(n--)
        {
            cin>>goal;
            ttime=(goal-now);
            time+=(ttime>0)?6*(ttime):(-4*ttime);
            time+=5;
            now=goal;
        }
        cout<<time<<endl;
    }
    return 0;
} 