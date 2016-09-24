//
//  main.cpp
//  DataStructurePTAtest04_4
//
//  Created by YaoxinZhuo on 9/24/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
using namespace std;
typedef struct TreeNode* Tree;
struct TreeNode
{
    int v;
    Tree Left,Right;
    int flag;
};

Tree NewNode(int V)
{
    Tree T = (Tree)malloc(sizeof(struct TreeNode));
    T->v = V;
    T->Left = T->Right = NULL;
    T->flag = 0;
    return T;
}

Tree Insert(Tree T,int V)
{
    if(!T)
    {
        T = NewNode(V);
    }
    else
    {
        if(V > T->v)
        {
            T->Right = Insert(T->Right, V);
        }
        else
        {
            T->Left = Insert(T->Left, V);
        }
    }
    return T;
}

Tree MakeTree(int N)
{
    Tree T;
    int V;
    scanf("%d",&V);
    T = NewNode(V);
    for(int i = 1;i < N;i++)
    {
        scanf("%d",&V);
        T = Insert(T,V);
    }
    return T;
}

int check(Tree T,int V)
{
    if(T->flag)
    {
        if(V < T->v)
        {
            return check(T->Left, V);
        }
        else if(V > T->v)
        {
            return check(T->Right, V);
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if(V == T->v)
        {
            T->flag = 1;
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int Judge(Tree T,int N)
{
    int V,flag = 0;
    scanf("%d",&V);
    if(V != T->v)
    {
        flag = 1;
    }
    else
    {
        T->flag = 1;
    }
    for(int i = 1;i < N;i++)
    {
        scanf("%d",&V);
        if((!flag) && (!check(T, V)))
        {
            flag = 1;
        }
    }
    if(flag)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void Reset(Tree T)
{
    if(T->Left)
    {
        Reset(T->Left);
    }
    if(T->Right)
    {
        Reset(T->Right);
    }
    T->flag = 0;
}

void FreeTree(Tree T)
{
    if(T->Left)
    {
        FreeTree(T->Left);
    }
    if(T->Right)
    {
        FreeTree(T->Right);
    }
    free(T);
}

int main(int argc, const char * argv[]) {
    
    int N,L;
    Tree T;
    scanf("%d",&N);
    while(N)
    {
        scanf("%d",&L);
        T = MakeTree(N);
        for(int i = 0;i < L;i++)
        {
            if(Judge(T,N))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
            Reset(T);
        }
        FreeTree(T);
        scanf("%d",&N);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
