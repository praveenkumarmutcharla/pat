#include<stdio.h>

int rev(int n){
	int t,x=0;
	while(n!=0){
		t=n%10;
		x=x*10+t;
		n=n/10;
	}
	
	return x;
}
void main(){
	int n,t;
	scanf("%d",&n);
	t=rev(n);
	
	printf("%d",(t%10)+(n%10));
}
