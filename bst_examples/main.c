#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char data;
    struct node* left;
    struct node* right;

}NODE;

NODE* add(char data) {
    // new_node eklenecek nodumm
    struct node* new_node;
    new_node=(struct node* )malloc(sizeof(struct node));
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
     return new_node;
};
void inr(NODE* p) // left,node,right
{
    if (p == NULL) {
        return;
    }
    else {
        inr(p->left);
        printf("%c ", p->data);
        inr(p->right);
    }
}
void postr(NODE* p) //left,right,node
{
    if (p == NULL) {
        return;
    }
    else {
        postr(p->left);
        postr(p->right);
        printf("%c ", p->data);
    }
}
void pre(NODE* p){ //node,left,right
    if (p == NULL) {
        return;
    }
    else{
         printf("%c ", p->data);
         pre(p->left);
         pre(p->right);
    }
}
//find spesific value
void* searchBST(NODE* p,char key){
    if(p== NULL) return NULL;
    else if(key<p->data)
        searchBST(p->left,key);
    else if(key>p->data) 
        searchBST(p->right,key);
    else
        return p;
}
//find smallest in bst 
void* findSmallest(NODE*p){
    if(p->left== NULL)
        //finied
        return(p);
    else
        findSmallest(p->left);
}
//find biggest in bst 
void* findBiggest(NODE* p){
    if(p->right== NULL)
        //finied
        return(p);
    else
        findSmallest(p->right);
    
}
int main()
{
        NODE* kok= add('+');
        kok->left=add('*');
        kok->left->left=add('c');

        kok->left ->right=add('+');
        kok->left ->right->left=add('a');
        kok->left ->right->right=add('b');

        kok->right = add('*');
        kok->right->left = add('d');
        kok->right->right= add('*');
        kok->right->right->left=add('f');
        kok->right->right->right=add('+');
        kok->right->right->right->left=add('g');
        kok->right->right->right->right=add('h');

        printf("inr: \n");
        inr(kok);
        printf("\n");
        printf("postr: \n");
        postr(kok);
        printf("\n");
        printf("pre: \n");
        pre(kok);


    printf("%p", searchBST(kok,'h'));
    printf(" \n %p",findSmallest(kok));
    printf("\n %p",findBiggest(kok));

    return 0;
}
