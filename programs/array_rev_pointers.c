#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char** rev(char *a){
	char *p;
	p=(char *)malloc(sizeof(char));
	p=strrev(a);
	return p;

}
int main(){
	
	char *p;
	p=(char *)malloc(sizeof(char));
	scanf("%s",p);
	char **b=rev(p);
	printf("%s",b);
}

