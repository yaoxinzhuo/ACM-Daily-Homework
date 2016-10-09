//
//  main.cpp
//  DataStructurePTAtest05_8
//
//  Created by YaoxinZhuo on 10/3/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAXN 1001
#define MINH -10001

int H[MAXN],size;

void create()
{
    size = 0;
    H[0] = MINH;
}

void insert(int x)
{
    int i;
    for(i = ++size;H[i/2] > x; i/=2)
    {
        H[i] = H[i/2];
    }
    H[i] = x;
}

int main(int argc, const char * argv[]) {
    
    int m,n,x;
    
    scanf("%d %d",&n,&m);
    
    create();
    
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    int j;
    for(int i = 0;i < m;i++)
    {
        scanf("%d",&j);
        printf("%d",H[j]);
        while(j > 1)
        {
            j /= 2;
            printf(" %d",H[j]);
        }
        cout<<endl;
    }
    

    return 0;
}
