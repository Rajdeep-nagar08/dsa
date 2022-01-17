#include<stdio.h>

struct node{
int data;
struct node* left;
struct node* right;
};

int main(){
int i=1;
struct node* root=0;
struct node* temp;
while(i!=0)
{
temp=create();
if(root==0)
root=temp;
else
insert(root,temp);
printf("\nDo u want to enter more(0,1)");
scanf("%d",&i);}

printf("\nInorder of this BST:");
inorder(root);
printf("\npreorder of this BST:");
preorder(root);
printf("\npostorder of this BST:");
postorder(root);
}


create(){
struct node *temp1;
printf("\nEnter data:");
temp1=(struct node*)malloc(sizeof(struct node));
scanf("%d",&temp1->data);
temp1->left=temp1->right=0;
return temp1;
}
void insert(struct node*root,struct node* temp)
{
if(temp->data<root->data)
{
if(root->left!=0)
insert(root->left,temp);
else
root->left=temp;
}
if(temp->data>root->data)
{
if(root->right!=0)
insert(root->right,temp);
else
root->right=temp;
}}


void preorder(struct node* root)
{
if(root==0)
{return 0;
}
printf("\n%d/",root->data);
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
printf("\n%d/",root->data);

}

void inorder(struct node*root)
{
if(root==0)
{return 0;
}
inorder(root->left);
printf("\n%d/",root->data);
inorder(root->right);
}
