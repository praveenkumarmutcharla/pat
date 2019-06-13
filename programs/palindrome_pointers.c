#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void palin(char *a){
	char *b;
	b=(char *)malloc(sizeof(char));
	strcpy(b,a);
	if(strcmp(strrev(a),b)==0)
		printf("yes");
	else
		printf("no");
}

int main(){
	
	char *p;
	p=(char *)malloc(sizeof(char));
	scanf("%s",p);
	palin(p);
	return 0;
}
