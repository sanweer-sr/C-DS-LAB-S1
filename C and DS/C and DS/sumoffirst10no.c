#include<stdio.h>
int main()
{
	int i= 1, sum = 0;
	while(i<=10)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("the sum of the first 10 number is : %d \n",sum);
	return 0;	
}
