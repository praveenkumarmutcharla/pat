#include<stdio.h>

int main(){
	int f1=1,f2=1,f3=0,i,j,n;
	
	printf("n value\n");
	scanf("%d",&n);
	
	for(i=3;i<=n/2;i++){
		f1=1;
		f2=1;
		
		for(j=2;j<i;j++)
		{
			if(i%j==0){
				f1=0;
				j=i;
		}
	}
		for(j=2;j<n-i;j++)
		{
			if((n-i)%j==0)
			{
				f2=0;
				j=n-i;
			}
		}
		if(f1==1 && f2==1){
			f3=1;
			printf("%d is sum of %d and %d\n",n,i,j);
		}
	}
		
		if(f3==1){
			printf("Not possible");
		}
	}
		
