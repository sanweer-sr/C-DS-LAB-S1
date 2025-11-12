#include<stdio.h>


void displayary(int ary3[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",ary3[i]);
	}
	printf("\n");
}

void sort(int arry[],int size)
{
	int temp;
	for(int i=0; i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arry[i]>arry[j])
			{
				temp = arry[i];
				arry[i] = arry[j];
				arry[j] = temp;
			}
		}
	}
}


void merge(int ary[],int size1, int ary2[], int size2,int MergeAry[])
{
	int limit =size1+size2,j=0;
	for(int i=0; i<size1;i++)
	{
		MergeAry[i]=ary[i];
	}
	for(int i=size1; i<limit;i++,j++)
	{
		MergeAry[i]=ary2[j];
	}	
}



int main()
{
	int ary[50], ary2[50], limit, limit2, i, MergeAry[100];
	
	printf("\n\nEnter The limit for your Array(max of 50) Merge: ");
	scanf("%d",&limit);
	
	if(limit>50)
	{
		printf("error :Enter limit under 50\n");
		return 0;
	}
	
	for(i=0;i<limit;i++)
	{
		printf("Enter the %d number of Array 1: ",i+1);
		scanf("%d",&ary[i]);
	}



	printf("\n\nEnter The limit for your Second  Array(max of 50) Merge: ");
	scanf("%d",&limit2);
	
	if(limit>50)
	{
		printf("error :Enter limit under 50\n");
		return 0;
	}
		
	for(i=0;i<limit2;i++)
	{
		printf("Enter the %d number of Array 2: ",i+1);
		scanf("%d",&ary2[i]);
	}


	printf("\n\nThe entered first array is :\n");
	displayary(ary,limit);

	printf("\n\nThe entered second array is : \n");
	displayary(ary2,limit2);

	sort(ary,limit);
	sort(ary2,limit2);
	
	printf("\n\nThe sorted first array is :\n");
	displayary(ary,limit);

	printf("\n\nThe sorted second array is : \n");
	displayary(ary2,limit2);


	merge(ary,limit,ary2,limit2,MergeAry);
	printf("\n\nThe Merged array is : \n");
	displayary(MergeAry,limit2+limit);


	sort(MergeAry,limit2+limit);
	printf("\n\nThe Sorted Merge array is : \n");
	displayary(MergeAry,limit2+limit);

	

	
	
	return 0;
}






