//
//  main.cpp
//  DataStructurePTAtest02_4
//
//  Created by YaoxinZhuo on 9/21/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int M,N,K;
    cin>>M>>N>>K;
    
    bool flag = true;
    stack<int>myStack;
    int n = 1;
    int num;
    
    for(int i = 0;i < K;i++)
    {
        n = 1;
        flag = true;
        
        for(int j = 0 ;j < N;j++)
        {
            cin>>num;
            while(myStack.size() <= M && flag )
            {
                if(myStack.empty() || myStack.top() != num)
                {
                    myStack.push(n++);
                }
                else if(myStack.top() == num)
                {
                    myStack.pop();
                    break;
                }
            }
            if(myStack.size() > M)
            {
                flag = false;
            }
        }
        
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        while(myStack.empty() != true)
        {
            myStack.pop();
        }
    }
    
    
    
    return 0;
}
