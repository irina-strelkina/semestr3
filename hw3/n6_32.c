//n6_32

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{
    double f;
    char *s[2];
}data;

typedef struct inode {
    struct data *p;
    struct inode *next;
} inode;

typedef data *ptr1;
typedef inode *ptr2;

ptr2 copybuild(ptr2 l1)
{
    ptr2 cur=l1;
    ptr2 l2;
    if (cur=NULL) return l2;
    l2=(ptr2)malloc(sizeof(inode));
    cur=l2;
    while ((cur->next)!=NULL){
        memcpy(l2->p,cur->p,sizeof(data));
        l2->next=(ptr2)malloc(sizeof(inode));
        l2=l2->next;
    }
    memcpy(l2->p,cur->p,sizeof(data));
    l2->next = NULL;
    return l2;
}

int main(void)
{
    return 0;
}
