#include<stdio.h>

void main(){
	int m,n,i,res=0;
	scanf("%d %d",&m,&n);

	while(m>0){
		if(m%2!=0){
			res=res+n;
		}
		m=m/2;
		n=n+n;
	}
	printf("%d",res);
}
