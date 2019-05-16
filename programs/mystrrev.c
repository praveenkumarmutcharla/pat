#include<stdio.h>
#include<string.h>
void mystrrev(char s[]){
	
	int i,n=strlen(s);
	char t;
	for(i=0;i<n/2;i++){
		t=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=t;
	}

}

int main(){
	 
	 char s[100],t[100];
	 scanf("%s",s);
	 strcpy(t,s);
	 mystrrev(t);
	 printf("%s",t);
	 
	 if(strcmp(t,s)==0){
	 	printf("\n yesssssssss that's a plaindrome");
	 }
	 else
	 	printf("\n Nope! not a plaindrome");
	 
	 
}
