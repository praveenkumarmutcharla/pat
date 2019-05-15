#include<stdio.h>
void main(){

int n,t,r=0,m;

scanf("%d",&n);
m=n;

while(n!=0){
	t=n%10;
	r=r*10+t;
	n=n/10;	
}

if(m==r){
	printf("palindrome");
}
else{
	printf("no");
}
}
