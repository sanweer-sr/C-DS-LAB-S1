#include<stdio.h>

#define MAX_SIZE 5

int CIRCULARQUEUE[MAX_SIZE],REAR = -1,FRONT = -1;


void ENQUEUE()
{
	if((REAR+1)%MAX_SIZE ==FRONT)
	{
		printf("The CIRCULAR QUEUE is Full\n");
	}
	
	else
	{	
		int item;
		printf("\nEnter the item to ENQUEUE: ");
		scanf("%d",&item);
	
		if(FRONT && REAR == -1)
		{
			FRONT=0;
		}
		REAR=(REAR+1%MAX_SIZE);
		CIRCULARQUEUE[REAR]=item;
		
	}
}

void DEQUEUE()
{
	
	if(FRONT<=-1)
	{
		printf("The CIRCULAR QUEUE has no Elements\n");
	}
	else
	{	
		printf("The DEQUEUE Element = %d \n",CIRCULARQUEUE[FRONT]);
		
		if(FRONT==REAR)
		{
			FRONT=-1;
			REAR=-1;
		}
		else
		{
			FRONT=(FRONT+1%MAX_SIZE);
		}
	}
	
}

void display()
{
	int i=0;
	if(FRONT<=-1)
	{
		printf("The CIRCULAR QUEUE has no Elements\n");
		return;
	}

	printf("THE CIRCULAR QUEUE : ");
	
	for(i=FRONT; i<=REAR;i=i+1%MAX_SIZE)
	{
		printf("%d ",CIRCULARQUEUE[i]);
	}
	printf("\n");


}


int main()
{
	int item;

	
	int option = 0;
	
	do
	{
		printf("\n---------------------CIRCULAR QUEUE OPERATIONS MENU---------------------\n");
		printf("1. ENQUEUE to the Circular Queue\n");
		printf("2. DEQUEUE from the Circular Queue\n");
		printf("3. Display the Circular Queue\n");
		printf("4. Exit MENU\n");
		printf("\nEnter the OPTION from MENU: \n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				
				
				ENQUEUE();
				break;
			
			case 2:
				DEQUEUE();
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

}
