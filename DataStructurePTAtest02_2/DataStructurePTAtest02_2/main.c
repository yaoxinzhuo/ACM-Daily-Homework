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

Node addPolynimal(Node p1,Node p2)
{
    Node p11 = p1 -> next;
    Node p22 = p2 -> next;
    Node pAdd = (struct polyNode*)malloc(sizeof(struct polyNode));
    pAdd->next = NULL;
    Node pAddHead = pAdd;
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
    return pAddHead;
}

Node mulPolynimal(Node p1,Node p2)
{
    Node p11 = p1->next;
    Node p22 = p2->next;
    Node finalResult = (struct polyNode*)malloc(sizeof(struct polyNode));
    finalResult->next = NULL;
    if(p11 == NULL || p22 == NULL)
    {
        return finalResult;
    }
    while (p11 != NULL)
    {
        p22 = p2->next;
        Node t = (struct polyNode*)malloc(sizeof(struct polyNode));
        Node tHead = t;
        while(p22 != NULL)
        {
            Node p = (struct polyNode*)malloc(sizeof(struct polyNode));
            p->next = NULL;
            p->coef = p11->coef * p22->coef;
            p->expon = p11->expon + p22->expon;
            t->next = p;
            t = t->next;
            p22 = p22->next;
        }
        //printPolynimal(tHead);
        finalResult = addPolynimal(tHead, finalResult);
        //printPolynimal(finalResult);
        p11 = p11->next;
    }
    return finalResult;
}

int main(int argc, const char * argv[]) {
    
    Node p1 = (struct polyNode*)malloc(sizeof(struct polyNode));
    Node p2 = (struct polyNode*)malloc(sizeof(struct polyNode));
    Node pMul = (struct polyNode*)malloc(sizeof(struct polyNode));
    pMul->next = NULL;
    Node pAdd = (struct polyNode*)malloc(sizeof(struct polyNode));
    Node p1HeadAdd = p1, p1Read = p1, p1HeadMul = p1;
    Node p2HeadAdd = p2, p2Read = p2, p2headMul = p2;
    Node pAddHead = pAdd;
    Node pMulHead = pMul;
    
    int n1,n2;
    
    scanf("%d",&n1);
    inputPolynimal(p1Read, n1);
    //printPolynimal(p1Read);
    
    scanf("%d",&n2);
    inputPolynimal(p2Read, n2);
    //printPolynimal(p2Read);
    
    //Add
    pAddHead = addPolynimal(p1HeadAdd, p2HeadAdd);
    
    
    //Mul
    pMulHead = mulPolynimal(p1HeadMul, p2headMul);
    
    
    printPolynimal(pMulHead);
    
    printPolynimal(pAddHead);
    
    
    return 0;
}
