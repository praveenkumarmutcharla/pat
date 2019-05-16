#include<stdio.h>

int main(){
	int i,j,n,k;
	char c;
	scanf("%d",&n);
	//------------------------------------
	/*
		A
	   ABA
	  ABCBA
	*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(j=0,c='A';j<i;j++,c++)
			printf("%c",c);
			
		for(;c>='A';--c)
			printf("%c",c);
		printf("\n");
	}
	
		//------------------------------------
	/*
		A
	   A A
	  A   A
	 ABCDCBA
	*/
			printf("\n");
		printf("\n");

	for(i=0;i<n;i++)
	{
		if(i<n-1){
		
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(j=0,c='A';j<i;j++,c++)
			printf("%c",c);
			
		for(;c>='A';--c)
			printf("%c",c);
		printf("\n");
	}
	else{
		for(j=0,c='A';j<i/2;j++,c++)
			printf("%c",c);
			
		for(;c>='A';--c)
			printf("%c",c);
		printf("\n");
	}
}
	
}
