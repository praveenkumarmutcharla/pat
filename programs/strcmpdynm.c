#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *a[2];
	char *b[2];
	int flag=1;
 for(int i=0;i<2;i++)
 {
 	a[i]=(char *)malloc(2*sizeof(char));
 	b[i]=(char *)malloc(2*sizeof(char));
	 }
	 
	 for(int i=0;i<2;i++)
	 {

	 	scanf("%s", a[i]);
	 	scanf("%s", b[i]);
	 }
	 
	 for(int i=0;i<2;i++){
	 	if(strcmp(a[i],b[i])!=0){
	 			flag=0;
	 			break;
	 	}
	 }
	 	
		if(flag==1)
	 		printf("equal");
	 	else
	 		printf("not");
}
