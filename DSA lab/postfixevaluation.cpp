#define max 20
#include<stdio.h>
float stack[max];
char postfix[max];
int top=-1;
float pop();
void push(float);
void add();
void subt();
void mult();
void divide();

int main(){
	float a,b,c;
	int i=0;
	printf("Enter postfix expression\n");
	gets(postfix);
	while(postfix[i]!='\0'){
		switch(postfix[i]){
			case '+': add();
					break;
			case '-': subt();
					break;
			case '*': mult();
					break;
			case '/': divide();
					break;
			default: push(postfix[i]-48);
					break;
		}
		i++;
	}
	printf("Result is %f",stack[top]);
	return 0;
}

float pop(){
	return stack[top--];
	
}

void push(float a){
	stack[++top]=a;
}

void add(){

	float a,b;
	a=pop();
	b=pop();
	push(b+a);
}
void subt(){
	float a,b;
	a=pop();
	b=pop();
	push(b-a);
}

void mult(){
	float a,b;
	a=pop();
	b=pop();
	push(b*a);
}
void divide(){
	float a,b;
	a=pop();
	b=pop();
	push(b/a);
}






