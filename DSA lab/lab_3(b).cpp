//Implementation of queue using array
//B. Head fixed and tail pointer vary.

#include<stdio.h>
#define maxsize 3
int queue[maxsize];
int front=0,rear;

int enqueue(){
	int i,data;
	if(rear==-1){
		printf("queue is full\n");
	}else{
		for(i=front;i>0;i--){
			queue[i]=queue[i-1];
		}
		printf("Enter item to push\n");
		scanf("%d",&data);
		queue[0]=data;
		front++;
	}
}

int dequeue(){
	int i;
	if(rear==-1){
		printf("queue is empty\n");
	}else{
		printf("dequeued %d",queue[0]);
		printf("\n");
		front--;
		for(i=0;i<rear;i++){
			queue[i]=queue[i+1];
		}
	}
}

int display(){
	int i;
	printf("Element of queue are\n");
	for(i=0;i<=(front-1);i++){
		printf("%d\n",queue[i]);
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
