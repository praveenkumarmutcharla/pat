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
		for(j=0;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
