#include<stdio.h>
#include<ctype.h>

void main(){
	
	int n,i;
	char s[100];
	
	scanf("%d",&n);
	
	scanf("%s",s);
	
	for(i=0;i<n;i++){
		if(isupper(s[i])){
			s[i]=tolower(s[i]);
		}
		else{
			s[i]=toupper((s[i]));
		}
	}
	printf("%s",s);
}
