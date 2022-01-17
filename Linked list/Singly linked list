#include <stdio.h> 

#include <stdlib.h> 

void main(){
struct node{
int data;
struct node* next;
};
struct node* newnode;
struct node* head;
head=0;
struct node* temp,*temp3;
int cont=1,total=0;
while(cont){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{head=temp=newnode;}
else{
temp->next=newnode;
temp=newnode;
}
printf("Do u want to continue(0,1)\n");
scanf("%d",&cont);
total++;
}
temp3=head;
printf("Your linked lust is:-\n");
while(temp3!=0){
printf("%d-->",temp3->data);
temp3=temp3->next;
    
}
printf("\nNo.of terms in your linked list are-->%d",total);

getchar();
}
