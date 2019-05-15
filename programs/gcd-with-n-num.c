#include<stdio.h>

int gcd(int a,int b){
	
	while(a!=b)
	{
		if(a>b)
		 gcd(a-b,b);
		else
		 gcd (a,b-a);
	}
	return a;
		
}

void main(int c,char* v[]){
	int i,a[20],res;
	
	for(i=1;i<c;i++){
		a[i-1]=atoi(v[i]);
	}
	
	res=gcd(a[0],a[1]);

 	for(i=2;i<c;i++){
		res=gcd(res,a[i]);
	}

	printf("%d",res);
	

}
