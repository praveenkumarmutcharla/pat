#include<stdio.h>
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}


void signSort(int a[],int n){
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
			if(a[j]<0){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	}
}
void signSort2(int a[],int n){
	int i,j,t;
	for(i=0;i<n;i++){
		j=0;
		if(a[i]<0){
			t=a[i];
			a[i]=a[j];
			a[j]=t;	
			j++;
		}
	}
}
void main(){
	int n,i,j,a[30];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	signSort2(a,n);
	display(a,n);
}
