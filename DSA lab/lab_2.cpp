//Implementation of stack using array(Bootom varying)
#include<stdio.h>
#define maxsize 3
int stack[maxsize];
int bos=0;

int push(){
	int i,data;
	if(bos==maxsize){
		printf("Stack is full\n");
	}else{
		for(i=bos;i>0;i--){
			stack[i]=stack[i-1];
		}
		printf("Enter item to push\n");
		scanf("%d",&data);
		stack[0]=data;
		bos++;
	}
}

int pop(){
	int i;
	if(bos==0){
		printf("Stack is empty\n");
	}else{
		printf("Popped %d",stack[0]);
		printf("\n");
		bos--;
		for(i=0;i<bos;i++){
			stack[i]=stack[i+1];
		}
	}
}

int display(){
	int i;
	printf("Element of stack are\n");
	for(i=0;i<=(bos-1);i++){
		printf("%d\n",stack[i]);
	}
}



int main(){
	int k;
	char choice;
	do{
	printf("Enter 1 to push, 2 to pop, 3 to display\n");
	scanf("%d",&k);
	switch(k){
		case 1: push();
				break;
		case 2: pop();
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
