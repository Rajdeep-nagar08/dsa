#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node* root;
    root=0;
    root=create();
    printf("Pre-Order of this tree is:\n");
    preorder(root);
    printf("\nPost-Order of this tree is:\n");
    postorder(root);
    printf("\nIn-Order of this tree is :\n");
    inorder(root);
    }
struct node{
int data;
struct node* left;
struct node* right;
};
 create(){
int x;
struct node* newnode;
newnode=(struct node*)malloc(sizeof
(struct node));
printf("Enter data(-1 for no node):\n");
scanf("%d",&x);
if(x==-1){
return 0;}
newnode->data=x;
printf("Enter left child of %d\n",x);
newnode->left=create();
printf("Enter right child of %d\n",x);
newnode->right=create();
return newnode;
}

void preorder(struct node* root)
{
if(root==0)
{return 0;
}
printf("%d/",root->data);
preorder(root->left);
preorder(root->right);
}

void postorder(struct node*root)
{
if(root==0)
{return 0;
}
postorder(root->left);
postorder(root->right);
printf("%d/",root->data);

}

void inorder(struct node*root)
{
if(root==0)
{return 0;
}
inorder(root->left);
printf("%d/",root->data);
inorder(root->right);
}
