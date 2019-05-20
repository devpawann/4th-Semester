//Implementation of queue using array
//A. Head and tail pointer vary.
#include<stdio.h>
#include<stdlib.h>
#define maxsize 3
int queue[maxsize];
int front=0;
int rear=-1;

int enqueue(){
	int num;													//tos==rear
	if(rear==(maxsize-1)){
		printf("Queue is full");
	}else{
		printf("Enter element to enqueue\n");
		scanf("%d",&num);
		queue[++rear]=num;
		printf("Enqueued: %d\n", queue[rear]);	
	}
}
int dequeue(){
	if(front>rear){
		printf("Queue is empty\n");
	}else{
		printf("Dequeued: %d\n",queue[front++]);
	}
}

int display(){
	int n;
	printf("Elements of queue are:\n");
	for(n=rear;n>=0;n--){
		printf("%d\n",queue[n]);
		}
	}



int main(){
	int k;
	char choice;
	do{
	printf("Enter 1 to enqueue, 2 to dequeue, 3 to display\n");
	scanf("%d",&k);
	switch(k){
		case 1: enqueue();
				break;
		case 2: dequeue();
				break;
		case 3: display();
				break;
		default: printf("Enter a valid input");
				break;
	}
	printf("Want to do again?(y/n)\n");
	fflush(stdin);
	scanf("%c",&choice);
	}while(choice=='y');
}














