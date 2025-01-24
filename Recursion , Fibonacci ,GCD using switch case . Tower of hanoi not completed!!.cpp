#include<stdio.h>
#include<stdlib.h>

int fibo(int);
int facto(int);
int gcd(int,int);
//int toh();

int main()
{
	int operation;
	printf("Compiled by: Anuprash Subedi");
	while(1)
	{
	
	printf("\n\nWhat operation would you like to perform ? \n");
	printf("1.Fibonacci        2.Factorial          3.GCD         4.Tower of hanoi         5.Exit\n");
	scanf("%d",&operation);

	switch(operation)
	{
		case 1:
			int n,i;
			printf("Enter the number of fibonacci terms to print:");
			scanf("%d",&n);
			printf("Fibonacci series : ------|\t");
			for(i=0;i<n;i++)
			{
				printf("%d\t",fibo(i));
			}
			printf("|------");
			break;
		
		case 2:
			int m;
			printf("Enter the number to find the factorial:");
			scanf("%d",&m);
			printf("-------| The factorial of %d is: %d |-------",m,facto(m));
			break;
			
		case 3:
			int num1, num2;
    		printf("Enter two numbers: ");
    		scanf("%d %d", &num1, &num2);
    		printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    		
			break;
			
		case 4:
			//toh();
			break;
			
		case 5:
			printf("Exiting.....");
			exit(0);
			
		default:
			printf("Invalid Input!");
	}
	}
	
}


int fibo(int n)
{
	
	if(n==0||n==1)
	{
		return n;
	}
	
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}

int facto(int m)
{
	if(m==0||m==1)
	{
		return 1;
	}
	
	else
	{
		return m*facto(m-1);
	}
}

int gcd(int a, int r)
 {
    if (r == 0)
    return a;
    return gcd(r, a % r);
}

int toh()
{
	
}



