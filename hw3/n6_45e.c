//n6_45e
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct treenode{
    int data;
    struct treenode *left;
    struct treenode *right;
}treenode;

typedef treenode *tnode;

void makenode( tnode *root, int val)
{
    tnode cur=*root;
    if (cur==NULL){
        tnode new=(tnode)malloc(sizeof(treenode));
        cur->data=val;
        cur->left=NULL;
        cur->right=NULL;
        return;
    }
    if ((cur->data)>=val){
        makenode (&(cur->left),val);
    }
    else{
        makenode (&(cur->right),val);
    }
    
}

void cleartree(tnode *root)
{
    tnode cur=*root;
    if (cur == NULL){
        return;
    }
    cleartree(&(cur -> left));
    cleartree(&(cur -> right));
    free(cur);
}

int main(void)
{
    return 0;
}
