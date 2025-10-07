#include<stdio.h>

#define MAX_SIZE 5

int stack[MAX_SIZE],TOP = -1;


void push(int item)
{
	if(TOP>MAX_SIZE)
	{
		printf("The Stack is Full\n");
	}
	else
	{
		TOP++;
		stack[TOP]=item;
	}
}

void pop()
{
	
	if(TOP<=-1)
	{
		printf("The Stack has no Elements\n");
	}
	else
	{	
		printf("The POP Element = %d \n",stack[TOP]);
		TOP--;
	}
	
}

void display()
{
	int i=0;
	if(TOP<=-1)
	{
		printf("The Stack has no Elements\n");
	}
	
	for(i=TOP; i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");


}


int main()
{
	int stack[10],Top,item;

	
	int option = 0;
	
	while(option>=0)
	{
		printf("\n---------------------STACK OPERATIONS MENU---------------------\n");
		printf("1. PUSH to the stack\n");
		printf("2. POP to the stack\n");
		printf("3. Exit MENU\n");
		printf("\nEnter the OPTION from MENU: \n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				printf("\nEnter the item to PUSH: ");
				scanf("%d",&item);
				push(item);
				display();
				break;
			
			case 2:
				pop();
				display();
				break;
			
			case 3:
				option = -1;
				break;
				
			
			default:
				option=-1;
				printf("\nEnter the OPTION from MENU (1 to 3)");
				break;
				
		}
	}

}
