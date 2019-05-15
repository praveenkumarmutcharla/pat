#include<stdio.h>
void revOrder(int a[],int n){
	int i,t;
	for(i=0;i<n/2;i++){
		t=a[n-i-1];
		a[n-i-1]=a[i];
		a[i]=t;
	}
}

int main(){
	
	int i,n,a[10];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	revOrder(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

