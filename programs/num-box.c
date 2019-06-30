#include<stdio.h>

int main(){

	int i,j,n;
	scanf("%d",&n);
	
	for(i=0;i<n*2;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d",n-i);
		}
		for(j=n/2+1;j<n;j++)
		printf("%d",n-i);
		
	printf("\n");
	}
	
}
