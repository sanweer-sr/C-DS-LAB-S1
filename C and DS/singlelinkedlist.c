#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *link;
};

struct node *header=NULL;

/*struct node createNode(int item)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	return newnode;
}*/


void insertAtFront()
{

	int item;
	printf("\nEnter the item to insertAtFront: ");
	scanf("%d",&item);
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;

	if(header == NULL)
	{
		header = newnode;
	}
	else
	{
		newnode->link=header;
		header = newnode;		
		
	}
}


void insertAtEnd()
{
	int item;
	printf("\nEnter the item to insertAtEnd: ");
	scanf("%d",&item);
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;

	if(header == NULL)
	{
		header = newnode;
	}
	else
	{
		struct node *ptr = header;
		while(ptr->link != NULL)
		{
			ptr = ptr->link;
		}	
		ptr->link = newnode;
	}
}

void insertAtAny()
{
	if(header==NULL)
	{
		printf("No value in linkedlist:");
	}
	else
	{
		int item,search;
		printf("\nEnter the item to insertAtAny: ");
		scanf("%d",&item);
		printf("\nEnter the Search insertAtAny: ");
		scanf("%d",&search);
		struct node *ptr = header;
		struct node *ptr1 = NULL;
		while(ptr->link!=NULL && ptr->data!=search)
		{
			ptr1 = ptr;
			ptr = ptr->link;
		}
		if(ptr->link==NULL && ptr->data!=search)
		{
			printf("The search NOT found");
			return;
		}
		
		struct node *newnode;
		newnode =(struct node * )malloc(sizeof(struct node));
		newnode->data=item;
		newnode->link=ptr;
		if (ptr == header)
		{
		 	header = newnode;
		}
		else{
			ptr1->link=newnode;
		}
	}
}


void deleteAtFront()
{
	if(header == NULL)
	{
		printf("No value in linkedlist Cant delete");
	}
	else
	{
		struct node *ptr = header;
		header = header->link;
		free(ptr);	
	}
}


void deleteAtEnd()
{
    if (header == NULL)
    {
        printf("No value in linked list. Can't delete.\n");
        return;
    }

    struct node *ptr = header;
    struct node *ptr1 = NULL;

    if (header->link == NULL)
    {
        free(header);
        header = NULL;
        return;
    }

    while (ptr->link != NULL)
    {
        ptr1 = ptr;
        ptr = ptr->link;
    }

    ptr1->link = NULL;
    free(ptr);
}



void deleteAtAny()
{
	if(header==NULL)
	{
		printf("No value in linkedlist:");
	}
	else
	{
		int item;
		printf("\nEnter the item to deleteAtAny: ");
		scanf("%d",&item);
		struct node *ptr = header;
		struct node *ptr1 = NULL;
		while(ptr->link!=NULL && ptr->data!=item)
		{
			ptr1 = ptr;
			ptr = ptr->link;
		}
		if(ptr->link==NULL && ptr->data!=item)
		{
			printf("The search NOT found");
			return;
		}
		
		if (ptr == header)
		{
    			header = header->link;
		}
		else
		{
    			ptr1->link = ptr->link;
		}
		free(ptr);

	}
}

void search()
{
	if(header==NULL)
	{
		printf("No value in linkedlist:");
		return;
	}
	int item;
	printf("\nEnter the item to Search: ");
	scanf("%d",&item);
	if(ptr->link==NULL && ptr->data!=item)
	{
		printf("The search NOT found");
		return;
	}
	else
	{
		
	}
}

void display()
{
	if(header==NULL)
	{
		printf("No value in linkedlist:");
	}
	else
	{
	
		struct node *ptr;
		ptr = header;
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
		printf("\n---------------------Single Linked List OPERATIONS MENU---------------------\n");
		printf("1. Insert at Front \n");
		printf("2. Insert at End \n");
		printf("3. Insert at Any \n");
		printf("4. Delete at Front \n");
		printf("5. Delete at End \n");
		printf("6. Delete at Any\n");
		printf("7. Display Linked List\n");
		printf("8. Exit MENU\n");
		printf("\nEnter the OPTION from MENU: \n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				insertAtFront();
				break;
			
			case 2:
				insertAtEnd();
				break;
				
				
			case 3:
				insertAtAny();
				break;
			
			case 4:
				deleteAtFront();
				break;
				

			case 5:
				deleteAtEnd();
				break;
			
			case 6:
				deleteAtAny();
				break;
				
				
			case 7:
				display();
				break;
				
			case 8:
				search();
				break;
			
			case 9:
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
