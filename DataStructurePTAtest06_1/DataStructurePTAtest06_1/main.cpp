//
//  main.cpp
//  DataStructurePTAtest06_1
//
//  Created by YaoxinZhuo on 10/9/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int G[11][11];
int N,E;
int visitedA[11];
int visitedB[11];

int findLinkedNode(int i)
{
    for(int j = 0;j < N;j ++)
    {
        if(visitedA[j] == 0 && G[i][j] == 1)
        {
            return j;
        }
    }
    return -1;
}

int findLinkedNodeB(int i)
{
    for(int j = 0;j < N;j ++)
    {
        if(visitedB[j] == 0 && G[i][j] == 1)
        {
            return j;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    
    scanf("%d %d",&N,&E);
    
    for(int i = 0;i < N;i++)
    {
        visitedA[i] = 0;
        visitedB[i] = 0;
        for(int j = 0;j < N;j++)
        {
            G[i][j] = 0;
        }
    }
    int v1,v2;
    for(int i = 0; i < E;i++)
    {
        scanf("%d %d",&v1,&v2);
        G[v1][v2] = 1;
        G[v2][v1] = 1;
    }
    
    //DFS
    stack<int> s;
    bool flag = true;//first print
    for(int i = 0;i < N;i++)
    {
        flag = true;
        if(visitedA[i] == 0)//not visited i
        {
            visitedA[i] = 1;
            if(flag)
            {
                printf("{ %d",i);
                flag = false;
            }
            else
            {
                printf(" %d",i);
            }
            s.push(i);
            while(!s.empty())
            {
                int x = s.top();
                int temp = findLinkedNode(x);
                if(temp != -1)
                {
                    visitedA[temp] = 1;
                    if(flag)
                    {
                        printf("{ %d",temp);
                        flag = false;
                    }
                    else
                    {
                        printf(" %d",temp);
                    }
                    s.push(temp);
                }
                else
                {
                    s.pop();
                }
            }
            printf(" }\n");
        }
        else//visited i
        {
            continue;
        }
    }
    
    //BFS
    queue<int> q;
    flag = true;
    for(int i = 0;i < N;i++)
    {
        flag = true;
        if(visitedB[i] == 0)
        {
            visitedB[i] = 1;
            if(flag)
            {
                printf("{ %d",i);
                flag = false;
            }
            else
            {
                printf(" %d",i);
            }
            q.push(i);
            while(!q.empty())
            {
                int v = q.front();
                q.pop();
                int w = findLinkedNodeB(v);
                while(w != -1)
                {
                    visitedB[w] = 1;
                    if(flag)
                    {
                        printf("{ %d",w);
                        flag = false;
                    }
                    else
                    {
                        printf(" %d",w);
                    }
                    q.push(w);
                    w = findLinkedNodeB(v);
                }
            }
            printf(" }\n");
        }
        else
        {
            continue;
        }
    }
    
    return 0;
}
