/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2005
*/
#include<iostream>
#include<stdio.h>
int main()
{
    int year,month,day;
    int y1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
    {
        int sum=0;
        if(((year%4==0)&&(year%100!=0))||(year%400==0))
        {
            month-=1;
            for(int i=1;i<=month;i++)
            {
                sum+=y2[i];
            }
            sum+=day;
            std::cout<<sum<<std::endl;
        }
        else
        {
            month-=1;
            for(int i=1;i<=month;i++)
            {
                sum+=y1[i];
            }
            sum+=day;
            std::cout<<sum<<std::endl;
        }
    }
    return 0;
}