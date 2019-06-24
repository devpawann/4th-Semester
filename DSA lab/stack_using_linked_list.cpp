// Stack implementation using liked list
//Double pointer points to address of another pointer variable. E.g int a=10; int *ptr=&a; int **p=&ptr; Here p is double pointer

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int info;
	struct node *next;
};
void push(struct node **,int);
int pop(struct node **);
void display(struct node*);

int main(){
	struct node *top;
	top=NULL;
	int ch,item;
	while(1){
		printf("1 Push 2.Pop 3.Display 4.Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("\nEnter item t be pushed\n");
					scanf("%d",&item);
					push(&top,item);
				break;
			
			case 2: if(top==NULL){
					printf("Stack is empty");
					}else{
						item=pop(&top);
						printf("\nPopped item is %d",item);
					}
				break;
				
			case 3: display(top);
				break;
				
			case 4: exit(1);
					
		}
		printf("\n");
	}
}

void push(struct node **topptr,int data){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("Memory not available");
		exit(1);
	}else{
		newnode -> info=data;
		newnode -> next= *topptr;
		*topptr=newnode;
	}
}

int pop(struct node **topptr){
	struct node *temp;
	int item;
	temp=*topptr;
	item=temp->info;
	*topptr=temp->next;
	free (temp);
	return item;
}

void display(struct node *temp){
	while(temp!=NULL){
		printf("¦%d¦\n",temp->info);
		temp=temp->next;
		
	}
} 










