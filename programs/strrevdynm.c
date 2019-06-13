#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char** rev(char *a[5]){
	for(int i=0;i<5;i++){
		strrev(a[i]);
	}
	
	return a;
}

int main(){
	char *a[5];

	for(int i=0;i<5;i++)
		a[i]=(char*)malloc(sizeof(char));
	for(int i=0;i<5;i++)
		scanf("%s",a[i]);
	
	char **b=rev(a);
	for(int i=0;i<5;i++)
		printf("%s\n",b[i]);
}
