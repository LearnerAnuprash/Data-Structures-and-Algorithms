#include<stdio.h>
#include<stdlib.h>



int main()
{
	int n,r,temp;
	
	printf("Enter the two numbers to find gcd of:\n");
	printf("Number 1:");
	scanf("%d",&n);
	printf("Number 2:");
	scanf("%d",&r);
	
	if(n<r)
	{
		temp=n;
		n=r;
		r=temp;
	}
	
	while(r!=0)
	{
		temp=n%r;
		n=r;
		r=temp;
    }
    
    printf("The GCD is :%d\n",n);
	
}

