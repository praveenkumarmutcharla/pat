#include<stdio.h>
#include<string.h>
void mystrrev(char a[]){
	
	int i,n=strlen(a);
	char t;
	for(i=0;i<n/2;i++){
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}

}

int main(){
	int i,n,a[100];
	char s[100];
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++){
		if(s[i]=='1')
			s[i]='0';
		else
			s[i]='1';
	}
	
	printf("1's compliment is %s",s);
	
	mystrrev(s);
	for(i=0;i<n;i++){
		a[i]=s[i]-'0';
	}
	if(a[0]==0)
		n++;
	for(i=0;i>n;i++){
		if(a[i]>0){
			a[i]=0;
			a[i+1]=a[i+1]+1;
		}
		}
		for(i=0;i<n;i++){
		if(a[i]==1)
			s[i]='1';
		else
			s[i]='0';
	}
		mystrrev(s);
		printf("%s",s);
		return 0; 
		
}
