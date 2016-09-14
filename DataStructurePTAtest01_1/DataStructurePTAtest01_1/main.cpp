//
//  main.cpp
//  DataStructurePTAtest01_1
//
//  Created by YaoxinZhuo on 9/15/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
int main(int argc, const char * argv[]) {
    // insert code here...
    int k, t;
    scanf("%d",&k);
    int currentSum = 0, maxSum = 0;
    while (k--)
    {
        scanf("%d",&t);
        currentSum += t;
        if(currentSum < 0)
        {
            currentSum = 0;
        }
        else
        {
            if(currentSum > maxSum)
            {
                maxSum = currentSum;
            }
        }
    }
    printf("%d",maxSum);
    return 0;
}
