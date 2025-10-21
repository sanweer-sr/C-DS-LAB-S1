#include<stdio.h>

int add(int,int);

int main()
{
	int a, b,sum;
	printf("Enter the first nunmber: ");
	scanf("%d",&a);
	printf("Enter the second nunmber: ");
	scanf("%d",&b);
	sum= add(a,b);
	printf("the sum of the digit = %d\n",sum);
	return 0;
}

int add(int x,int y)
{
	int result;
	result = x+y;
	return result;
}
