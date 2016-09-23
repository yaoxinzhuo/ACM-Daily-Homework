#include <iostream>
#include <stdio.h>


#define MaxTree 10
#define ElementType char
#define Tree int
#define Null (-1)

using namespace std;

struct TreeNode
{
    ElementType Element;
    Tree Left;
    Tree Right;
}T1[MaxTree],T2[MaxTree];

Tree BuildTree(struct TreeNode T[])
{
    int check[MaxTree];
    int Root = -1;
    int N;
    char cl,cr;
    scanf("%d",&N);
    int i;
    if(N != 0)
    {
        for(i = 0;i < N;i++)
        {
            check[i] = 0;
        }
        for(i = 0;i < N;i++)
        {
            //scanf("%c %c %c",&T[i].Element,&cl,&cr);
            cin>>T[i].Element>>cl>>cr;
            if(cl!='-')
            {
                T[i].Left = cl - '0';
                check[T[i].Left] = 1;
            }
            else
            {
                T[i].Left = -1;
            }
            
            if(cr!='-')
            {
                T[i].Right = cr - '0';
                check[T[i].Right] = 1;
            }
            else
            {
                T[i].Right = -1;
            }
        }
        for(i = 0;i < N;i++)
        {
            if(check[i] == 0) break;
        }
        Root = i;
    }
    return Root;
}

/*int isomorphic(Tree R1,Tree R2)
{
    if((R1==Null)&&(R2==Null))//both empty
    {
        return 1;
    }
    
    if(((R1==Null)&&(R2!=Null))||((R1!=Null)&&(R2==Null)))
    {//one of them is not empty
        return 0;
    }
    if(T1[R1].Element!=T2[R2].Element)
    {
        return 0;
    }
    if((T1[R1].Left==Null)&&(T2[R2].Left==Null))
    {
        return isomorphic(T1[R1].Right,T2[R2].Right);
    }
    if(((T1[R1].Left!=Null)&&(T2[R2].Left!=Null))&&((T1[T1[R1].Left].Element)==(T2[T2[R2].Left].Element)))
    {
        return (isomorphic(T1[R1].Left,T2[R2].Left)&&(isomorphic(T1[R1].Right,T2[R2].Right)));
    }
    else
    {
        return (isomorphic(T1[R1].Left,T2[R2].Right)&&isomorphic(T1[R1].Right,T2[R2].Left));
    }
}*/

int isomorphic(int R1,int R2)
{
    if((R1==-1)&&(R2==-1))
    {
        return 1;
    }
    else if(T1[R1].Element == T2[R2].Element)
    {
        return (isomorphic(T1[R1].Left, T2[R2].Left)&&isomorphic(T1[R1].Right,T2[R2].Right))||(isomorphic(T1[R1].Left, T2[R2].Right)&&isomorphic(T1[R1].Right, T2[R2].Left));
    }
    else
    {
        return 0;
    }
}

int main()
{
    Tree R1,R2;
    R1 = BuildTree(T1);
    R2 = BuildTree(T2);
    //printf("%d %d\n",R1,R2);
    int flag = isomorphic(R1, R2);
    if(flag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
