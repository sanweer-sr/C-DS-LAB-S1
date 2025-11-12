#include<stdio.h>
int main()
{
	int num, sum = 0,i=1;
	printf("Enter the Number:");
	scanf("%d",&num);
	do
	{
		sum=sum+i;
		i=i+1;
	}while(i<=num);
	printf("The Average of the %d number is : %d \n",num,sum/num);
	return 0;	
} 
