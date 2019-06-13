#include<stdio.h>

struct charitybox{
	int r;
	int p;
};

int main(){
	int n,sum1=0,sum2=0;
	scanf("%d",&n);
	struct charitybox c[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&c[i].r,&c[i].p);
	}
	for(int i=0;i<n;i++){
		sum1=sum1+c[i].r;
		sum2=sum2+c[i].p;
	}
	
	sum1=sum1+sum2/100;
	sum2=sum2-(sum2/100)*100;
	
	printf("%d %d",sum1,sum2);
	
}
