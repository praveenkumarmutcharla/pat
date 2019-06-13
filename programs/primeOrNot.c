#include<stdio.h>
#include<math.h>
void prime_or_not(int n){
	int c=0,p=sqrt(n);
	for(int i=1;i<p/2;i++){
		if(n%i==0){
			c++;
		}
		if(c>3){
			continue;
		}
	}
	if(c==2)
		printf("prime");
	else
		printf("nope");
}

int main(){
	
	int i,n;
	scanf("%d",n);
	prime_or_not(n);
}
