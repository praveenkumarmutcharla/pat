#include<stdio.h>
#include<string.h>
void rotate(char a[]){
	
	int i,n;
	char t;
	
	n=strlen(a);
	
	t=a[0];
	
	for(i=0;i<n-1;i++){
		
	 a[i]=a[i+1];
	 
	}
	a[n-1]=t;
}
int main(){
	
	int x,i,n;
	char s[100],t;
	
	scanf("%s",s);
	
	scanf("%d",&x);
	n=strlen(s);
	
	x=x%n;
	
	for(i=0;i<x;i++)
		rotate(s);
	printf("%s",s);
}
