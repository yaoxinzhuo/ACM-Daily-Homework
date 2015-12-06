/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1007
*/
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
const int MAXN = 100010;
const double inf = 10e100;
#define SQL(x) (x)*(x)
struct Point
{
  double x,y;
  int index;     
}sx[MAXN],sy[MAXN],st[MAXN];
bool x_cmp(const Point &p1,const Point &p2)
{
     return p1.x<p2.x;
}
bool y_cmp(const Point &p1,const Point &p2)
{
     return p1.y<p2.y;
}
double dis(Point p1,Point p2)
{
       return sqrt(SQL(p1.x-p2.x)+SQL(p1.y-p2.y));
}
double merge(Point sy[],Point st[],int l,int r,double dist,double L)
{
       int Len = 0;
       for(int i=l;i<=r;i++)
       {
           if(sy[i].x>(L-dist)&&sy[i].x<(L+dist))st[Len++]=sy[i];
       }
       
       for(int i=0;i<Len;i++)
       {
           for(int j=i+1;j<Len&&j<i+8;j++)
           {
               dist = min(dist,dis(st[i],st[j]));
           }
       }
       return dist;
}
double solve(Point sx[],Point sy[],Point st[],int l,int r)
{
       if(r==l)return inf;
       else if(r-l==1)return dis(sx[l],sx[r]);
       else if(r-l==2)
       {
            double x1 = dis(sx[l],sx[l+1]);
            double x2 = dis(sx[l],sx[r]);
            double x3 = dis(sx[l+1],sx[r]);
            x1 = min(x1,x2);
            x1 = min(x1,x3);
            return x1;
       }
       else
       {
           int m = (l+r)>>1,i,j,k;
           double L = sx[m].x, dist;
           for(i=l,j=l,k=m+1;i<=r;)
           {
               if(sy[i].index<=sx[m].index)st[j++]=sy[i++];
               else st[k++]=sy[i++];
           }
           //printf("%d %d ~~~\n",j,k);
           for(i=l;i<=r;i++)sy[i]=st[i];//,printf("%.2lf %.2lf\n",st[i].x,st[i].y);system("pause");
           double p = solve(sx,sy,st,l,m),q = solve(sx,sy,st,m+1,r);
           //printf("%.2lf  %.2lf\n",p,q);system("pause");
           dist = min(p,q);
           for(i=l,j=l,k=m+1;j<=m&&k<=r;)
           {
               if(sy[j].y<sy[k].y)st[i++]=sy[j++];
               else if(sy[j].y>sy[k].y)st[i++]=sy[k++];
               else
               {
                   if(sy[j].index<sy[k].index)st[i++]=sy[j++];
                   else st[i++] = sy[k++];
               }
           }
           while(j<=m)st[i++]=sy[j++];
           while(k<=r)st[i++]=sy[k++];
           for(i=l;i<=r;i++)sy[i]=st[i];
           //system("pause");
           dist = merge(sy,st,l,r,dist,L); 
           //printf("%.2lf\n",dist);
           return dist;
       }
}
int main()
{
    int n;
    //freopen("in.txt","r",stdin);
    //freopen("out2.txt","w",stdout);
    while(scanf("%d",&n),n)
    {
        for(int i=0;i<n;i++)
        scanf("%lf %lf",&sx[i].x,&sx[i].y);
        stable_sort(sx,sx+n,x_cmp);
        for(int i=0;i<n;i++)
        sx[i].index = i,sy[i]=sx[i];
        stable_sort(sy,sy+n,y_cmp);
        //for(int i=0;i<n;i++)printf("%.2lf %.2lf %d\n",sx[i].x,sx[i].y,sx[i].index);
        //printf("\n");
        //for(int i=0;i<n;i++)printf("%.2lf %.2lf %d\n",sy[i].x,sy[i].y,sy[i].index);
        printf("%.2lf\n",solve(sx,sy,st,0,n-1)/2);
    }
}