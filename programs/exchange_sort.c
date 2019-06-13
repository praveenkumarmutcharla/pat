#include<stdio.h>
void swap(int *p,int *q){
	int t=*q;
	*q=*p;
	*p=t;
}
void exchange_sort(int a[],int n){
	int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	exchange_sort(a,n);
	for(int i=0;i<n;i++)
	 printf("%d ",a[i]);
}
