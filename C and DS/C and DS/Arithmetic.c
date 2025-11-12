#include<stdio.h>
int main()
{
	int n;
	while(n==0){
		int num1,num2,oper;
		printf("------------------Calculator------------------\n");
		printf("\nEnter The Number First Number:");
		scanf("%d",&num1);
		printf("\nEnter Second Number:");
		scanf("%d",&num2);
	
	
		printf("\n0. EXIT");
		printf("\n1. ADD");
		printf("\n2. SUBSTRACT");
		printf("\n3. MULTIPLICATION");
		printf("\n4. DIVISOR");
		printf("\n5. REMAINDER\n\n");
		printf("\nEnter the choose operation to be done: ");
		scanf("%d",&oper);
	
		switch(oper)
		{
			case 0:
			printf("\nThe remainder of the numbers = %d\n",num1%num2);
			break;
			case 1:
			printf("\nThe Sum of the numbers = %d\n",num1+num2);
			break;
			case 2:
			printf("\nThe Substract of the numbers = %d\n",num1-num2);
			break;
			case 3:
			printf("\nThe Multiply of the numbers = %d\n",num1*num2);
			break;
			case 4:
			printf("\nThe Divisor of the numbers = %d\n",num1/num2);
			break;
			case 5:
			printf("\nThe remainder of the numbers = %d\n",num1%num2);
			break;
			default:
			printf("\nError: invalid operations\n");
		
		}
	}
	return(0);
	
}	

