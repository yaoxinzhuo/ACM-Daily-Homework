#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int INF=0;
        int MAX_V=n;
        int cost[MAX_V][MAX_V];
        int maxcost[MAX_V];
        bool used[MAX_V];
        int V=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>cost[i][j];
            }
        }
        for(int i=0;i<V;i++)
        {
            maxcost[i]=0;
            used[i]=false;
        }
        maxcost[0]=0;
        int res=0;
        while(true)
        {
            int v=-1;
            for(int u=0;u<V;u++)
            {
                if(!used[u]&&(v==-1||maxcost[u]>maxcost[v]))
                {
                    v=u;
                }
            }
            if(v==-1)
            {
                break;
            }
            used[v]=true;
            
            for(int u=0;u<V;u++)
            {
                maxcost[u]=max(maxcost[u],cost[v][u]);
            }
            res+=maxcost[v];
        }
        cout<<res<<endl;
    }
    return 0;
}
