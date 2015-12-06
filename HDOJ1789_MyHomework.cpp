/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1789
*/
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

const int MAXN=1010;

struct Node
{
    int d,s;
}node[MAXN];

bool used[10000];

bool cmp(Node a,Node b)
{
    if(a.s==b.s)
    {
        return a.d<b.d;
    }    
    return a.s>b.s;
}        

int main()
{
    int T;
    int n;
    int j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&node[i].d);
        for(int i=0;i<n;i++) scanf("%d",&node[i].s);
        sort(node,node+n,cmp);
        memset(used,false,sizeof(used));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(j=node[i].d;j>0;j--)
            {
                if(!used[j])
                {
                    used[j]=true;
                    break;
                }    
            }    
            if(j==0)
              ans+=node[i].s;
        }    
        printf("%d\n",ans);
    }    
    return 0;
}