#include<stdio.h>
int main(){
	int i,j,n;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i== 0 || j== 0||i == n-1||j== n-1)
				printf("* ");
			else if(i == j){
				printf("* ");
				}
			else if(j-i==n-2)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
