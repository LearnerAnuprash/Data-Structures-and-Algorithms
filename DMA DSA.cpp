#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int n,i,m;
	int *data;
	
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	printf("\n Printing Garbage value \n");
	
	data=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("The element is : %d\n",*(data+i));
	}
	
	printf("\n ***Data Initialization***\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter element:");
		scanf("%d",data+i);
	}
	
	printf("\n***After initialization***\n");
	for(i=0;i<n;i++)
	{
		printf("The element is: %d\n",*(data+i));
	}
	
	
	
	printf("Enter the new allocating space for the array (must be greater than previous):");
	scanf("%d",&m);
	
	data=(int*)realloc(data,m*(sizeof(int)));
	
	printf("\n Printing Garbage value after reallocating \n");
	
	for(i=0;i<m;i++)
	{
		printf("The element is : %d\n",*(data+i));
	}
	
	printf("\n ***Data Initialization***\n");
	
	for(i=n;i<m;i++)
	{
		printf("Enter additional elements:");
		scanf("%d",data+i);
	}
	
	printf("\n***After initialization***\n");
	for(i=0;i<m;i++)
	{
		printf("The element is: %d\n",*(data+i));
	}
	
	
}
