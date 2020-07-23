#include <stdio.h>
#include <stdlib.h>

struct node{
 int data;
 struct node *left,*right,*createnode;
};

createnode(value){
struct node *newnode = malloc(sizeof(struct node));
newnode->data=value;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
};
struct node *insertl(struct node*root,int value){
root->left=createnode(value);
return root->left;
};
struct node *insertr(struct node*root,int value){
root->right=createnode(value);
return root->right;
};

void inorder(struct node *root){
if(root==NULL) return;
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
void preorder(struct node *root){
if(root==NULL) return;
printf("%d ",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(struct node *root){
if(root==NULL) return;
preorder(root->left);
preorder(root->right);
printf("%d ",root->data);
}
int main()
{
    int n;
    struct node *root=createnode(1);
    insertl(root,12);
    insertr(root,9);
    insertl(root->left,5);
    insertr(root->left,6);
    printf("BINARY TREE TRAVERSALS");
    while(1){
        printf("\n\n\nEnter your choice:\n1.Preorder\n2.Inorder\n3.Postorder\n4.Exit\n");
        scanf("%d",&n);
        switch(n){
        case 1:printf("Pre-Order traversal is:\n"); preorder(root); break;
        case 2:printf("In-Order traversal is:\n");  inorder(root); break;
        case 3:printf("Post-Order traversal is:\n");  postorder(root); break;
        case 4:exit(0);
        default:printf("Enter valid choice\n");
        }
    }
    return 0;
}
