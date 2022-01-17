#include <stdio.h> 

#include <stdlib.h> 

int main(){
struct node{
int data;
struct node* next;
struct node* prev;
};
struct node* newnode;
struct node* head;
head=0;
struct node* temp;
int cont=1,total=0;
while(cont){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data\n");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->prev=0;
if(head==0)
{head=temp=newnode;}
else{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
printf("Do u want to continue(0,1)\n");
scanf("%d",&cont);
total++;
}
temp=head;
printf("Your Doubly linked lust is:-\n");
while(temp!=0){
printf("[%p-%d-%p]--->",&temp->prev,temp->data,&temp->next);
temp=temp->next;

    
}
printf("\nNo.of terms in your doubly  linked list are-->%d",total);

getchar();
}
