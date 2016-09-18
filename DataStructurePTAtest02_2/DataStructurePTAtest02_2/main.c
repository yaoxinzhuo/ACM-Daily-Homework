//
//  main.c
//  DataStructurePTAtest02_2
//
//  Created by YaoxinZhuo on 9/18/16.
//  Copyright © 2016 YaoxinZhuo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct polyNode
{
    int coef;
    int expon;
    struct polyNode *next;
};
typedef struct polyNode *Polynimal;
typedef Polynimal Node;

void printPolynimal(Node p)
{
    if(p->next == NULL)
    {
        printf("0 0\n");
    }
    else
    {
        p = p->next;
        while(p!=NULL)
        {
            if(p->next==NULL)
            {
                printf("%d %d\n",p->coef,p->expon);
            }
            else
            {
                printf("%d %d ",p->coef,p->expon);
            }
            p = p->next;
        }
    }
}

void inputPolynimal(Node pRear,int n)
{
    int c,e;
    if(n == 0)
    {
        Node p = (struct polyNode*)malloc(sizeof(struct polyNode));
        p->coef = 0;
        p->expon = 0;
    }
    while (n--)
    {
        scanf("%d %d",&c,&e);
        Node p = (struct polyNode*)malloc(sizeof(struct polyNode));
        p->coef = c;
        p->expon = e;
        pRear->next = p;
        pRear = p;
    }

}

int main(int argc, const char * argv[]) {
    
    Node p1 = (struct polyNode*)malloc(sizeof(struct polyNode));
    Node p2 = (struct polyNode*)malloc(sizeof(struct polyNode));
    Node pMul = (struct polyNode*)malloc(sizeof(struct polyNode));
    Node pAdd = (struct polyNode*)malloc(sizeof(struct polyNode));
    Node p1Head = p1, p1Rear = p1;
    Node p2Head = p2, p2Rear = p2;
    Node pAddHead = pAdd;
    Node pMulHead = pMul;
    Node p11 = p1;
    Node p22 = p2;
    
    int n1,n2;
    
    scanf("%d",&n1);
    inputPolynimal(p1Rear, n1);
    printPolynimal(p1Head);
    
    scanf("%d",&n2);
    inputPolynimal(p2Rear, n2);
    printPolynimal(p2Head);
    
   //Add
    p11 = p11 -> next;
    p22 = p22 -> next;
    while (p11 != NULL && p22 != NULL)
    {
        Node p = (struct polyNode*)malloc(sizeof(struct polyNode));
        if(p11->expon > p22->expon)
        {
            p->coef = p11->coef;
            p->expon = p11->expon;
            pAdd->next = p;
            p11 = p11->next;
            pAdd = pAdd->next;
        }
        else if(p11->expon < p22->expon)
        {
            p->coef = p22->coef;
            p->expon = p22->expon;
            pAdd->next = p;
            p22 = p22->next;
            pAdd = pAdd->next;
        }
        else
        {
            if(p11->coef+p22->coef != 0)
            {
                p->expon = p11->expon;
                p->coef = (p11->coef + p22->coef);
                pAdd->next = p;
                pAdd = pAdd->next;
            }
                p11 = p11->next;
                p22 = p22->next;
        }
        
    }
    while(p11 != NULL)
    {
        Node p = (struct polyNode*)malloc(sizeof(struct polyNode));
        p->coef = p11->coef;
        p->expon = p11->expon;
        pAdd->next = p;
        pAdd = pAdd->next;
        p11 = p11->next;
    }
    while(p22 != NULL)
    {
        Node p = (struct polyNode*)malloc(sizeof(struct polyNode));
        p->coef = p22->coef;
        p->expon = p22->expon;
        pAdd->next = p;
        pAdd = pAdd->next;
        p22 = p22->next;
    }
    printPolynimal(pAddHead);
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
