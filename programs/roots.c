#include<stdio.h>

void main(){
	int a,b,c,d;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==0){
	printf("not qudriatic");
	return 0;
	}
	
	d=b*b - 4*a*c;
	if(d==0){
		printf("roots are real");
	}
	else if(d<0){
		printf("roots are imaginary");
	}
	else{
		printf("roots are real and distinct");
	}
}
