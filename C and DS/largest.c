#include<stdio.h>
int main()
{
	int num1,num2,large;
	
	printf("Enter the First Number to check Largest number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number to check Largest number: ");
	scanf("%d",&num2);

	if (num1>num2)
	{
		large =num1;
	}
	else
	{
		large = num2;
	}
	
	printf("Largest of %d and %d is : %d  \n",num1,num2,large);

}

