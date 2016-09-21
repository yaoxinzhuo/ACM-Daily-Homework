//
//  main.cpp
//  DataStructurePTAtest02_3
//
//  Created by YaoxinZhuo on 9/21/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
using namespace std;

struct node {
    int address;
    int data;
    int next;
};

int Address[100000];
int Data[100000];
int Next[100000];
int Pre[100000];

typedef node* pNode;

int firstNode,totalNumber,reversedPosition;

void printAll()
{
    int position = firstNode;
    int nextPosition = Next[position];
    int prePosition = -1;
    for(;;)
    {
        if(Next[position] == -1)
        {
            Pre[position] = prePosition;
            printf("%05d %05d %d %d\n",Pre[position],Address[position],Data[position],Next[position]);
            break;
        }
        Pre[position] = prePosition;
        if(Pre[position] == -1)
        {
            printf("%5d %05d %d %05d\n",Pre[position],Address[position],Data[position],Next[position]);
        }
        else
        {
            printf("%05d %05d %d %05d\n",Pre[position],Address[position],Data[position],Next[position]);
        }
        prePosition = Address[position];
        position = Address[Next[position]];
        nextPosition = Next[position];
    }
}

void reversePrint(int n)
{
    if(n == 1)
    {
        ;
    }
    else
    {
        int dividePosition = firstNode;
        int divideNext = Next[dividePosition];
        for(int i = 1;i < n;i++)
        {
            dividePosition = divideNext;
            divideNext = Next[dividePosition];
        }
        printf("\n\n%05d %d\n\n",Address[dividePosition],divideNext);
        int currentPosition = Address[dividePosition];
        //int prePosition = Pre[currentPosition];
        for(int i = 1;i <= n;i++)
        {
            if(i == n)
            {
                printf("%05d %d %5d\n",Address[currentPosition],Data[currentPosition],divideNext);
            }
            else
            {
                printf("%05d %d %05d\n",Address[currentPosition],Data[currentPosition],Pre[currentPosition]);
                currentPosition = Pre[currentPosition];
            }
        }
        currentPosition = divideNext;
        for(;;)
        {
            if(Next[currentPosition] == -1)
            {
                printf("%05d %d %d\n",Address[currentPosition],Data[currentPosition],Next[currentPosition]);
                break;
            }
            else
            {
                printf("%05d %d %05d\n",Address[currentPosition],Data[currentPosition],Next[currentPosition]);
                currentPosition = Next[currentPosition];
            }
        }
    }
}

int main(int argc, const char * argv[])
{
    scanf("%d %d %d",&firstNode,&totalNumber,&reversedPosition);
    
    int position,data,nextPosition;
    for(int i = 0;i < totalNumber;i++)
    {
        
        scanf("%05d %d %05d",&position,&data,&nextPosition);
        Address[position] = position;
        Data[position] = data;
        Next[position] = nextPosition;
    }
    
    printAll();
    
    reversePrint(reversedPosition);
    
    return 0;
}
