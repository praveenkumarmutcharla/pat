#include<stdio.h>

void display(int a[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("size - %d \n",n);
}

int insert(int a[],int n,int x,int index){
	int j;
	if(index<0 || index>n){
		return n;
	}
	else if(index==n){
		a[index]=x;
	}
	else{
			for(j=n;j>index;j--)
				a[j]=a[j-1];
			a[index]=x;
		return ++n;
	}
	
}
int del(int a[],int n,int index){
	int j;
	if(index<0 || index>n-1){
		return n;
	}
	else if(index==n){
		a[index]=0;
	}
	else{
			for(j=n-1;j>index;j--)
				a[j-1]=a[j];
		}
		a[--n]=0;
		return n;
	}
	

int main(){
	int n,a[100],i,index,x,y,index2;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("value and index to insert");
	scanf("%d %d",&x,&index);
	n=insert(a,n,x,index);
	
	display(a,n);
	printf(" index to delete");
	scanf("%d",&index2);
	n=del(a,n,index);
	display(a,n);
}


