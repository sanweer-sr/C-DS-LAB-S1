#include<stdio.h>
int main()
{
	int num, largest = 0,i=1;
	while(i<=5)
	{
		printf("Enter the %d Number:",i);
		scanf("%d",&num);
		if(num>largest)
		{
			largest=num;
		}
		i=i+1;
	}
	printf("The Largest of the 5 number is : %d \n",largest);
	return 0;	
} 
