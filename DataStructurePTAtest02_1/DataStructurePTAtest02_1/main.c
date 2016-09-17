#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Merge(List L1, List L2)
{
    PtrToNode L = NULL;
    PtrToNode l1,l2;
    PtrToNode Last = (struct Node*)malloc(sizeof(struct Node));
    L = Last;
    l1 = L1;
    l2 = L2;
    
    l1 = l1->Next;
    l2 = l2->Next;
    
    while(l1&&l2)
    {
        if(l1->Data < l2->Data)
        {
            Last->Next = l1;
            Last = l1;
            l1 = l1->Next;
        }
        else
        {
            Last->Next = l2;
            Last = l2;
            l2 = l2->Next;
        }
    }
    Last->Next = l1?l1:l2;
    L1->Next = NULL;
    L2->Next = NULL;
    return L;
}
