//Circular queue

#include<stdio.h>
#define maxsize 3
int queue[maxsize],rear;

int front=rear=-1;

int enqueue(){
	int item;
	if(rear==-1){
		front=rear=0;
		printf("Enter data to enqueue\n");
		scanf("%d",&item);
		queue[rear]=item;
		
	}else if(front==(rear+1)%maxsize){
		printf("Queue is full\n");
		
	}else{
		rear=(rear+1)%maxsize;
		printf("Enter data to enqueue\n");
		scanf("%d",&item);
		queue[rear]=item;
		
	}
	
}

int dequeue(){
	int item;
	if(front==-1){
		printf("Queue is empty\n");
	}else{
		item=queue[front];
		printf("front=%d rear=%d\n",front,rear);
		printf("%d\n",item);
			printf("front=%d rear=%d\n",front,rear);
		if(front==rear){
			front=rear=-1;
		}else{
			front=(front+1)%maxsize;
		}
			printf("front=%d rear=%d\n",front,rear);
	}

}


int display(){
int i;
if(front==-1){
	printf("queue is empty\n");
}else{
	if(front<rear){
		//Display for pure linear queue
		for(i=front;i<=rear;i++){
			printf("%d\n",queue[i]);
		}
	}else{ 	//This loop is for circular queue
		//This  is for linear part inside of circular queue
		for(i=front;i<maxsize;i++){
				printf("%d\n",queue[i]);
		}
		for(i=0;i<=rear;i++){
			printf("%d\n",queue[i]);
		}
		
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
