#include<stdio.h>
int main()
{
	int num,sum = 0,i=0;
	printf("Enter the Number:");
	scanf("%d",&num);
	for(i=0;i<=10;i++)
	{
		printf("%d x %d = %d\n",num,i,num*i);
	}
	return 0;	
} 
