/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1009
*/
#include <iostream>
#include <cstdio>
using namespace std;
typedef struct p{
    int j,f;
    double d;
}point;
int main()
{
    int M,N;
    int i,j;
    double res;
    point a[1005],temp;
    while(~scanf("%d%d",&M,&N))
    {
        if(M==-1&&N==-1) break;
        res=0;
        for(i=0;i<N;i++)
        {
            cin>>a[i].j>>a[i].f;
            a[i].d=(double)a[i].j/a[i].f;
        }
        for(i=0;i<N;i++)
        {
            for(j=i;j<N;j++)
            {
                if(a[i].d<a[j].d)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<N;i++)
        {
            if(M>=a[i].f)//条件注意
            {
                res+=a[i].j;
                M-=a[i].f;
                if(M==0)
                    break;
            }
            else if(M<a[i].f)
            {
                res+=a[i].d*M;
                break;
            }
        }
        printf("%.3f\n",res);
    }
        return 0;
}