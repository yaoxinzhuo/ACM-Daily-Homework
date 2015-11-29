//problem 1001
#include<iostream>
using namespace std;

int find(int T)
{
    if(T==1||T==0)
    {
        return 0;
    }
    else if(T==2)
    {
        return 0;
    }
    else
    {
        if(T%2==0)
        {
            return 2*find(T/2);
        }
        else
        {
            return find(T/2)+find(T-T/2)+1;
        }
    }
}

int main()
{
    int T,N,result;
    cin>>T;
    while(T--)
    {
        int temp;
        cin>>temp;
    result=find(temp);
    cout<<result<<endl;
    }
    return 0;
}