#include<stdio.h>
#include<string.h>
int main(){
	int n,i,k=0,flag=0,j;
	char s[100],lookup[100];
	scanf("%[^\n]s",s);
	
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		lookup[i]='\0';
	}

	for(i=0;i<n;i++){
		flag=0;
		
		for(j=0;lookup[j]!='\0';j++)
		{	

			if(s[i]==lookup[j])
			{	
				flag=1;
				printf("%c",s[i]);
				break;
			}
		}
		if(flag==0){
			lookup[k++]=s[i];
		}
		
	}

}
