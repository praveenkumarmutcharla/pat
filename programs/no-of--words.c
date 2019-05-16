#include<stdio.h>
#include<string.h>
#include<ctype.h>
int words(char a[]){
	int i,n=strlen(a),c=1;
	
	if(n==0)
		return 0;

	for(i=0;i<n;i++){
		if(isspace(a[i]) && isspace(a[i+1])==0)
		{
			c++;
		}
	}
	return c;
}
int main(){
	char s[100];
	int c;
	gets(s);
	
	c=words(s);
	
	printf("%d",c);
}
