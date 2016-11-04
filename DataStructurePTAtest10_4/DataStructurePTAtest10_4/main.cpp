//
//  main.cpp
//  DataStructurePTAtest10_4
//
//  Created by YaoxinZhuo on 04/11/2016.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int age[51];
    int t;
    for(int i = 0;i < 51;i ++)
    {
        age[i] = 0;
    }
    while(n--)
    {
        scanf("%d",&t);
        age[t]+=1;
    }
    for(int i = 0;i < 51;i ++)
    {
        if(age[i] != 0)
        {
            printf("%d:%d\n",i,age[i]);
        }
    }
    return 0;
}
