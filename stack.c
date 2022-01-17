#include<stdio.h>
#include<stdlib.h>

int main()
{
     push(2);
     push(5);
     push(7);
     push(9);
     display();
}
struct node{
int data;
struct node* next;
};
struct node* top=0;
push(int x){

struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node
));
newnode->data=x;
newnode->next=top;
top=newnode;
}
display(){
struct node* temp;
printf("Your Stack Is\n-->");
for(temp=top;temp!=0;temp=temp->next){
printf("%d\n-->",temp->data);
}}
