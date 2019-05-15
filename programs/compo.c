#include<stdio.h>
#include<math.h>

void main(){
	
	float p,n,r;
	scanf("%f %f",&p,&n);
	
	if(p>=10000)
		r=3.2;
	else
		r=5.3;
	
	double l=p*pow(1+r/100,n);
	
	printf("%lf",l);
}
