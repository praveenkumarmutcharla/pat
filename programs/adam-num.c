#include<stdio.h>
#include<math.h>

int reverse(int n){
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
	t=n;
	n=(int)pow(n,2);
	n=reverse(n);
	n=(int)sqrt(n);
	n=reverse(n);
	if(t==n)
		printf("yes");
}
