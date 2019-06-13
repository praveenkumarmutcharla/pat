#include<stdio.h>
#include<string.h>
char* sort(char *a){
	int i,j,n;
	n=strlen(a);
	char t;
	
	
	for(i=0;i<n-1;i++)	{
		for(j=i;j<n-1;j++){
			if( ( *(a+i) ) > ( *(a+i+1) ) ) {
			t=*(a+i);
			*(a+i)=*(a+i+1);
			*(a+i+1)=t;
		}
		}
	}
		return a;
}

int anagram(char *a, char *b){
	char *s,*c;
	s=sort(a);
	c=sort(b);
	printf("%s,%s",s,c);
	if(strcmp(s,c)==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	char s[100],c[100];
	char *p,*q;
	int k;
	scanf("%s",s);
	scanf("%s",c);
	if(strlen(s)!=strlen(c)){
		printf("NO! they are not!");
		return 0;
	}
	p=s;
	q=c;
	k=anagram(p,q);
	if(k==1)
		printf("\nYES they are!");
	else
		printf("\nNO! they are not!");	
}
