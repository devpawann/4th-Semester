////Implementation of stack using array(top varying /bottom fixed)
#include<stdio.h>
#include<stdlib.h>
#define maxsize 2
int stack[maxsize];
int tos=-1;

int push(){
	int num;
	if(tos==(maxsize-1)){
		printf("Stack is full");
	}else{
		printf("Enter element to push\n");
		scanf("%d",&num);
		stack[++tos]=num;
		printf("Pushed: %d\n", stack[tos]);	
	}
}
int pop(){
	if(tos==(-1)){
		printf("Stack is empty");
	}else{
		printf("Popped: %d",stack[tos--]);
	}
}

int display(){
	int n;
	printf("Elements of stack are:\n");
	fflush(stdin);
	for(n=tos;n>=0;n--){
		printf("%d\n",stack[n]);
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














