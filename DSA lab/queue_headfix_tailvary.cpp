//Implementation of queue using array
//B. Head fixed and tail pointer vary.

#include<stdio.h>
#define maxsize 3
int queue[maxsize];
int front=0,rear=0;

int enqueue(){
	int num;
	if(rear==maxsize){
		printf("Stack overflow\n");
	}else{
		printf("Enter element to enqueue\n");
		scanf("%d",&num);
		queue[rear]=num;
		printf("Enqueued: %d\n");
		rear++;
	}
	
}

int dequeue(){
	int i;
	if(rear==front){
		printf("Stack underflow\n");
	}else{
		printf("%d dequeued\n",queue[front]);
		for(i=0;i<=(rear-1);i++){
			queue[i]=queue[i+1];
		}
		rear--;
	}
}


int display(){
	int i;
	if(rear==front){
		printf("Stack underflow\n");
	}else{
		printf("Elements of queue are\n");
		for(i=0;i<=(rear-1);i++){
			printf("%d\n",queue[i]);
		}
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
