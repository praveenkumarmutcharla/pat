#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void duplic(int *a,int n){
	char t;
	for(int i=0;i<n;i++){
		t=a[i];
		for(int j=i;j<n;j++){
			if(a[j]==t){
				printf("%s",a[j]);
			}
		}
	}
	
}

int main(){
	int *p;
	int n;
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%d",&p[i]);
	duplic(p,n);
	return 0;
}
