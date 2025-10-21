#include<stdio.h>
int main()
{
	int ary[50], sum = 0,limit, i;
	printf("\n\nEnter The limit for your Array(max of 50) Sum: ");
	scanf("%d",&limit);
	
	if(limit>50)
	{
		printf("error :Enter limit under 50\n");
		return 0;
	}
	
	for(i=0;i<limit;i++)
	{
		printf("Enter the %d number of array: ",i+1);
		scanf("%d",&ary[i]);
	}
	
	for(i=0;i<limit;i++)
	{
		sum = sum+ ary[i];
	}

	printf("The sum of the array of Limit %d = %d\n",limit,sum);

	return 0;
}
