#include<stdio.h>

#define MAX_SIZE 5

int QUEUE[MAX_SIZE],REAR = -1,FRONT = -1;


void ENQUEUE(int item)
{
	if(REAR>=MAX_SIZE-1)
	{
		printf("The QUEUE is Full\n");
	}
	else
	{
		if(FRONT && REAR == -1)
		{
			FRONT=0;
		}
		REAR=REAR+1;
		QUEUE[REAR]=item;
		
	}
}

void DEQUEUE()
{
	
	if(FRONT<=-1)
	{
		printf("The QUEUE has no Elements\n");
	}
	else
	{	
		printf("The DEQUEUE Element = %d \n",QUEUE[FRONT]);
		
		if(FRONT==REAR)
		{
			FRONT=-1;
			REAR=-1;
		}
		else
		{
			FRONT=FRONT+1;
		}
	}
	
}

void display()
{
	int i=0;
	if(FRONT<=-1)
	{
		printf("The QUEUE has no Elements\n");
		return;
	}

	printf("THE QUEUE : ");
	
	for(i=FRONT; i<=REAR;i++)
	{
		printf("%d ",QUEUE[i]);
	}
	printf("\n");


}


int main()
{
	int item;

	
	int option = 0;
	
	do
	{
		printf("\n---------------------QUEUE OPERATIONS MENU---------------------\n");
		printf("1. ENQUEUE to the Queue\n");
		printf("2. DEQUEUE from the Queue\n");
		printf("3. Display the Queue\n");
		printf("4. Exit MENU\n");
		printf("\nEnter the OPTION from MENU: \n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				printf("\nEnter the item to ENQUEUE: ");
				scanf("%d",&item);
				
				ENQUEUE(item);
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
