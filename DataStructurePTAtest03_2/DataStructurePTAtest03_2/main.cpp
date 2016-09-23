//
//  main.cpp
//  DataStructurePTAtest03_2
//
//  Created by YaoxinZhuo on 9/23/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <queue>

#define MaxTree 11
#define ElementType char
#define Tree int
#define Null (-1)

using namespace std;

struct TreeNode
{
    Tree Left;
    Tree Right;
}T1[MaxTree];

bool flagIsFirstChar = true;
queue<int> q;

Tree BuildTree(struct TreeNode T[])
{
    int check[MaxTree];
    int Root = -1;
    int N;
    char cl,cr;
    scanf("%d",&N);
    int i;
    if(N != 0)
    {
        for(i = 0;i < N;i++)
        {
            check[i] = 0;
        }
        for(i = 0;i < N;i++)
        {
            //scanf("%c %c %c",&T[i].Element,&cl,&cr);
            cin>>cl>>cr;
            if(cl!='-')
            {
                T[i].Left = cl - '0';
                check[T[i].Left] = 1;
            }
            else
            {
                T[i].Left = -1;
            }
            
            if(cr!='-')
            {
                T[i].Right = cr - '0';
                check[T[i].Right] = 1;
            }
            else
            {
                T[i].Right = -1;
            }
        }
        for(i = 0;i < N;i++)
        {
            if(check[i] == 0) break;
        }
        Root = i;
    }
    return Root;
}

void printAllTree(Tree n)
{
    if(T1[n].Left==-1&&T1[n].Right==-1)
    {
        printf("%d\n",n);
        return;
    }
    else
    {
        q.push(n);
        while(!q.empty())
        {
            if(T1[q.front()].Left!=-1)
            {
                q.push(T1[q.front()].Left);
            }
            if(T1[q.front()].Right!=-1)
            {
                q.push(T1[q.front()].Right);
            }
            if(T1[q.front()].Left==-1&&T1[q.front()].Right==-1)
            {
                if(flagIsFirstChar)
                {
                    printf("%d",q.front());
                    flagIsFirstChar = false;
                }
                else
                {
                    printf(" %d",q.front());
                }
            }
            q.pop();
        }
    }
    cout<<endl;
}

int main()
{
    Tree R1;
    R1 = BuildTree(T1);
    //printf("%d\n",R1);
    printAllTree(R1);
    return 0;
}
