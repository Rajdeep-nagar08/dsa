#include<stdio.h>
#include<stdlib.h>

#define N 3
int front=0,rear=0,count=1;
int queue[N];
void main(){

insert();

display();
}
int insert(){
 while(count){

 if(rear==N){
count=0;
printf("Queue is full");}
else{
printf("Enter element of queue\n");
scanf("%d",&queue[rear]);
rear++;
printf("wants to enter next element(0,1)\n");
scanf("%d",&count);
}
}}
int display(){
for(int i=front;i!=rear;i++)
printf("\n %d. |%d|\n",i+1,queue[i]);
}
