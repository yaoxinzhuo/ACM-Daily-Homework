//
//  main.cpp
//  DataStructurePTAtest07_4
//
//  Created by YaoxinZhuo on 10/15/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
#define MAXN (99999999)
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int N,M;
    scanf("%d %d",&N,&M);
    
    int D[N+1][N+1];
    for(int i = 0;i < N+1;i++)
    {
        for(int j = 0;j < N+1;j++)
        {
            D[i][j] = D[j][i] = MAXN;
        }
    }
    int a,b,l;
    for(int i = 0; i < M;i++)
    {
        scanf("%d %d %d",&a,&b,&l);
        D[a][b] = D[b][a] = l;
    }
    
    for(int k = 1;k <= N;k++)
    {
        for(int i = 1;i <= N ;i++)
        {
            if(i==k)
            {
                continue;
            }
            for(int j = 1;j <= N;j++)
            {
                if(D[i][k] < MAXN && D[k][j] < MAXN && D[i][j] > D[i][k]+D[k][j])
                {
                    D[i][j] = D[i][k]+D[k][j];
                }
            }
            //printf("%d-%d %d\n",i,j,D[i][j]);
        }
    }
    
    bool f[N+1];
    int max[N+1];
    for(int i = 1;i <= N;i++)
    {
        f[i] = true;
        max[i] = -1;
    }
    
    for(int i = 1;i <= N;i++)
    {
        for(int j = 1;j <= N;j++)
        {
            if(j == i)
            {
                continue;
            }
            if(D[i][j] > max[i])
            {
                max[i] = D[i][j];
            }
            if(D[i][j] == 99999999)
            {
                f[i] = false;
                break;
            }
        }
        //printf("%d\n",max[i]);
    }
    
    bool finalflag = false;
    int finali,finalmax;
    finalmax = MAXN;
    for(int i = N ;i >= 1;i--)
    {
        if(f[i] == true)
        {
            finalflag = true;
            break;
        }
    }
    
    if(finalflag == false)
    {
        printf("0\n");
    }
    else
    {
        for(int i = 1; i <= N;i++)
        {
            if(max[i] < finalmax)
            {
                finalmax = max[i];
                finali = i;
            }
        }
        printf("%d %d\n",finali,finalmax);
    }
    
    
    return 0;
}
