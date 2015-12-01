/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=1213
*/

#include<iostream>
using namespace std;
int father[1001];
int find(int n)
{
    if(father[n]!=n)
    {
        father[n]=find(father[n]);
    }
    return father[n];
}
int main()
{
    int T,N,M,A,B;
    cin>>T;
    while(T--)
    {
        cin>>N>>M;
        for(int i=1;i<=N;i++)
        {
            father[i]=i;
        }
        for(int j=0;j<M;j++)
        {
            cin>>A>>B;
            A=find(A);
            B=find(B);
            if(A!=B)
            {
                N--;
            }
            father[A]=father[B];
        }
        cout<<N<<endl;
    }
    return 0;
}
