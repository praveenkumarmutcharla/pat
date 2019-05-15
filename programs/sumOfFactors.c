#include<stdio.h>
int sumOfFactors(int n){
		int i,sum=0;
		for(i=1;i<=n/2;i++){
			if(n%i==0){
				sum=sum+i;
			}
	}
		return sum;
}

void main(){
	int n,m;
	scanf("%d %d",&m,&n);
	
	if((sumOfFactors(m)==n) && (sumOfFactors(n)==m)){
		printf("yes");
	}
	

	
}
