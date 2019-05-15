#include<stdio.h>
#include<ctype.h>

void main(){
	int i,n,a[11]={0};
	
	char s[20];
	scanf("%d",&n);
	scanf("%s",s);

	for(i=0;i<n;i++){
		if(isalpha(s[i])==0){
			a[(s[i]-'0')]+=1;
		}
}
for(i=0;i<10;i++)
	printf("%d - %d \n",i,a[i]); 
		
}
