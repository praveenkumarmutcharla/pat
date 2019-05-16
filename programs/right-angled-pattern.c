#include<stdio.h>


/*
n=3

***
***
***

*/

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		printf("\n");
		printf("\n");
		
	for(i=0;i<n;i++)
	{	
	for(j=n-i-1;j>0;j--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
		printf("\n");
		printf("\n");
		
	for(i=0;i<n;i++)
	{	
	for(j=n-i-1;j>0;j--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
