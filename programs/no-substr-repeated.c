#include<stdio.h>
#include<string.h>

int f(char s[],char c[]){
	char *p;
	int i,count=0;
	
	if(strlen(s)==0)
		return 0;
	else{
		p=strstr(s,c);
		count++;
		if(p!=NULL)
			return count+f(p+1,c);
}
}

int f1(char s[],char c[]){
	char *p;
	int i,count=0,n=strlen(c);
	
	if(strlen(s)==0)
		return 0;
	else{
		p=strstr(s,c);
		count++;
		if(p!=NULL)
			return count+f1(p+n,c);
}
}

void main(){
	char s[]="aabaacaadaabaaba";
	char c[]="aaba";
	printf("%d\n",f(s,c));
	printf("%d",f1(s,c));
}

