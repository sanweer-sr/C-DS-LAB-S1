#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *link;
};

struct node *TOP=NULL;
int count=0;


void pop()
{	
	if(TOP == NULL)
	{
		printf("STACK UNDERFLOW");
		return;
	}
	if(count == 0)
	{
		printf("No value in Stack Cant delete");
	}
	else
	{
		struct node *ptr = TOP;
		TOP = TOP->link;
		free(ptr);
		count=count-1;	
	}
}

void push()
{

	if(count >= 5)
	{
		printf("STACK OVERFLOW");
		return;
	}
	int item;
	printf("\nEnter the item to insertAtFront: ");
	scanf("%d",&item);
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;

	if(TOP == NULL)
	{
		TOP = newnode;
		count=count+1;
	}
	else
	{
		newnode->link=TOP;
		TOP = newnode;	
		count=count+1;	
		
	}
}

void display()
{
	if(TOP==NULL)
	{
		printf("No value in linkedlist:");
	}
	else
	{
	
		struct node *ptr;
		ptr = TOP;
		while(ptr != NULL)
		{
			printf("%d ",ptr->data);
			ptr = ptr->link;
		}
	}
}

int main(){
	int option;

	do
	{
		printf("\n---------------------Stack Using Single Linked List OPERATIONS MENU---------------------\n");
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display Stack\n");
		printf("4. Exit MENU\n");
		printf("\nEnter the OPTION from MENU: \n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				push();
				break;
			
			case 2:
				pop();
				break;
				
				
			case 3:
				display();
				break;
			
			case 4:
				option = -1;
				break;
				
			
			default:
				option=-1;
				printf("\nEnter the OPTION from MENU (1 to 4)");
				break;
				
		}
	}while(option>=0);
	return 0;
}
