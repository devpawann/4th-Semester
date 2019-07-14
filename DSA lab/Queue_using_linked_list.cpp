//Linked list as a queue

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
}*front,*rear;

void enqueue(int);
void dequeue();
void display();
int main(){
	
	front =NULL;
	rear = NULL;
	int item,choice;
	while(1){
		printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter an item\n");
					scanf("%d",&item);
					enqueue(item);
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(1);
			
			default:  printf("Enter Correct value \n");
					break;
		}
	}
}

void enqueue(int data){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("Memory is not available");
	}else{
		newnode->info=data;
		newnode->next=NULL;
		if(rear==NULL){
			front = newnode;
			rear=newnode;
		}
		else
		{
		rear->next=newnode;
		rear=newnode;
		}
		}
	}



void dequeue(){
		struct node *temp;
			int item;
	if(front==NULL){
		printf("queue is empty\n");
	}else if(front==rear){
		item=front->info;
		printf("%d\n",item);
		temp=front;
		front=front->next;
		front=NULL;
		rear=NULL;
	}else{
	
	
		
		item=front->info;
		printf("%d\n",item);
		temp=front;
		front=front->next;
		
	}
	free(temp);
}

void display(){
struct node *temp;
temp=front;
while(temp!=NULL){
	printf("%d\n",temp->info);
	temp=temp->next;
}

}














