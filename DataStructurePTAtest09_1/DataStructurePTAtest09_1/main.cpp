//
//  main.cpp
//  DataStructurePTAtest09_1
//
//  Created by YaoxinZhuo on 10/28/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
using namespace std;
int s[100005];
int length;

int partition(int s[],int l, int r)
{
    int p;
    p=s[l];
    while(l<r)
    {
        while(l<r && s[r] >= p)
        {
            r--;
        }
        int t = s[l];
        s[l] = s[r];
        s[r] = t;
        while(l<r && s[l] <= p)
        {
            l++;
        }
        t = s[l];
        s[l] = s[r];
        s[r] = t;
    }
    return l;
}

void quicksort(int s[],int l,int r)
{
    int p;
    if(l < r)
    {
        p = partition(s, l, r);
        quicksort(s, l, p);
        quicksort(s, p+1, r);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&s[i]);
    }
    i--;
    quicksort(s, 0, i);
    for(int j = 0;j < i;j++)
    {
        printf("%d ",s[j]);
    }
    printf("%d\n",s[i]);
    return 0;
}
