//
//  main.cpp
//  DataStructurePTAtest01_2
//
//  Created by YaoxinZhuo on 9/15/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//
/*
#include <iostream>
int main(int argc, const char * argv[]) {
    int k, t, leftNumber = 0, rightNumber = 0,finalLeftNumber = 0,finalRightNumber = 0;
    scanf("%d",&k);
    
    int currentSum = 0, maxSum = -1;
    bool positiveFlag = false;
    bool initialFlag = true;
    int firstNum = 0;
    int lastNum = 0;
    int pos = 0;
    int leftPos = 0;
    int finalLeftPos = 0;
    while (pos < k)
    {
        scanf("%d",&t);
        if(initialFlag)//如果输入的是第一个数
        {
            leftNumber = t;
            finalLeftNumber = leftNumber;
            leftPos = pos;
            finalLeftPos = pos;
            initialFlag = false;
            firstNum = t;
        }
        if(positiveFlag == false)
        {
            rightNumber = t;
        }
        if(currentSum == 0 && positiveFlag == false)
        {
            leftNumber = t;
        }
        currentSum += t;
        if(currentSum < 0)
        {
            currentSum = 0;
            leftPos = pos+1;
        }
        else
        {
            positiveFlag = true;
            if(currentSum > maxSum)
            {
                rightNumber = t;
                finalLeftNumber = leftNumber;
                leftPos = pos;
                finalLeftPos = pos;
                finalRightNumber = rightNumber;
                maxSum = currentSum;
            }
        }
        lastNum = t;
        pos++;
    }
    if (maxSum < 0)
    {
        maxSum = 0;
        finalLeftNumber = firstNum;
        finalRightNumber = lastNum;
    }
    printf("%d %d %d",maxSum,finalLeftNumber,finalRightNumber);
    return 0;
}*/
#include <iostream>
using namespace std;
int n,a[10005];
int main()
{
    int i,sum,currentSum,currentLeft,finalLeft,finalRight;//i即为currentRight
    cin>>n;
    for(i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    currentSum = currentLeft = 0;
    sum = finalRight = finalLeft = -1;
    for(i = 0;i < n;i++)
    {
        currentSum += a[i];
        if(currentSum < 0)//如果小于0，肯定从右边开始新的current子序列
        {
            currentSum = 0;
            currentLeft = i+1;
        }
        else
        {
            if(currentSum > sum)
            {
                sum = currentSum;
                finalLeft = currentLeft;
                finalRight = i;
            }
            else if(currentSum == sum && finalRight + finalLeft > i + currentLeft)//i和j要小
            {
                finalLeft = currentLeft;
                finalRight = i;
            }
        }
    }
    if(finalLeft == -1)
    {
        cout<<"0 "<<a[0]<<" "<<a[n-1]<<endl;
    }
    else
    {
        cout<<sum<<" "<<a[finalLeft]<<" "<<a[finalRight]<<endl;
    }
    return 0;
}
