#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

typedef struct tnode {
    int data;
    struct tnode *next;
} tnode;

typedef tnode *ptr;

void addnode(ptr *a, int val)
{
    ptr new=(ptr)malloc(sizeof(tnode));
    new->data=val;
    new->next=*a;
    *a=new;
}

void printer(ptr *a)
{
    ptr cur=*a;
    while (cur!=NULL){
        printf("   %d",(*cur).data);
        cur=cur->next;
    }
    printf("\n");
}

int twin(int n,ptr *a)
{
    ptr cur=*a;
    if (cur==NULL) return 0;
    while (cur!=NULL){
        if ((cur->data)==n) return 1;
        cur=cur->next;
    }
}

void createl3(ptr *l1,ptr *l2)
{
    ptr l3=NULL;
    ptr cur1=*l1;
    ptr cur2=*l2;
    int f=0;
    while (cur1!=NULL){
        f=twin(cur1->data,l2);
        if (f=0){
            int temp=(cur1->data);
            addnode(&l3,temp);
        }
    }
    while (cur2!=NULL){
        f=twin(cur2->data,l1);
        if (f=0){
            int temp=(cur2->data);
            addnode(&l3,temp);
        }
    }
    if (l3==NULL) return;
    printer(&l3);
    return;
}

int main(void)
{
    ptr ptr_s1=NULL;
    ptr ptr_s2=NULL;
    int i=SIZE;
    int j=SIZE;
    int mas[SIZE]={1,2,3,4,5,6};
    while (i>0){
        addnode(&ptr_s1,mas[SIZE-i]);
        i--;
    }
    int ar[SIZE]={2,4,6,8,10,12};
    while (j>0){
        addnode(&ptr_s2,ar[SIZE-j]);
        j--;
    }
    printer(&ptr_s1);
    printer(&ptr_s2);
    createl3(&ptr_s1,&ptr_s2);
    return 0;
}