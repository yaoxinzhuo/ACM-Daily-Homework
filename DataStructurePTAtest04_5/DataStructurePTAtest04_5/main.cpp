//
//  main.cpp
//  DataStructurePTAtest04_5
//
//  Created by YaoxinZhuo on 9/25/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
// Thanks http://www.cnblogs.com/kuotian/p/5321634.html

#include <iostream>
using namespace std;
typedef struct TreeNode* AvlTree;
typedef struct TreeNode* Position;

struct TreeNode
{
    int Data;
    int Height;
    AvlTree Left;
    AvlTree Right;
};

int Max(int x1,int x2)
{
    return (x1>x2)?x1:x2;
}

int Height(Position p)
{
    if(!p)
    {
        return -1;
    }
    else
    {
        return p->Height;
    }
}

Position SingleRotateWithLeft(Position a)
{
    Position b = a->Left;
    a->Left = b->Right;
    b->Right = a;
    a->Height = Max(Height(a->Left), Height(a->Right)) + 1;
    b->Height = Max(Height(b->Left),a->Height) + 1;
    return b;
}

Position SingleRotateWithRight(Position a)
{
    Position b = a->Right;
    a->Right = b->Left;
    b->Left = a;
    a->Height = Max(Height(a->Left),Height(a->Right)) + 1;
    b->Height = Max(a->Height,Height(b->Right)) + 1;
    return b;
}

Position DoubleRotateWithLeftRight(Position a)
{
    a->Left = SingleRotateWithRight(a->Left);
    return SingleRotateWithLeft(a);
}

Position DoubleRotateWithRightLeft(Position a)
{
    a->Right = SingleRotateWithLeft(a->Right);
    return SingleRotateWithRight(a);
}

AvlTree insert(int x,AvlTree T)
{
    if(!T)
    {
        T = (AvlTree)malloc(sizeof(struct TreeNode));
        T->Data = x;
        T->Left = T->Right = NULL;
        T->Height = 0;
    }
    else if(x < T->Data)
    {
        T->Left = insert(x, T->Left);
        if(Height(T->Left) - Height(T->Right) == 2)
        {
            if(x < T->Left->Data)
            {
                T = SingleRotateWithLeft(T);
            }
            else
            {
                T = DoubleRotateWithLeftRight(T);
            }
        }
    }
    else if(x > T->Data)
    {
        T->Right = insert(x, T->Right);
        if(Height(T->Left) - Height(T->Right) == -2)
        {
            if(x > T->Right->Data)
            {
                T = SingleRotateWithRight(T);
            }
            else
            {
                T  = DoubleRotateWithRightLeft(T);
            }
        }
    }
    else
    {
    }
    T->Height = Max(Height(T->Left), Height(T->Right)) + 1;
    return T;
}



int main(int argc, const char * argv[]) {
    
    int N,x;
    AvlTree T = NULL;
    scanf("%d",&N);
    for(int i = 0;i < N;i++)
    {
        scanf("%d",&x);
        T = insert(x,T);
    }
    printf("%d\n",T->Data);
    return 0;
}
