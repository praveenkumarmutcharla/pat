#include<stdio.h>
#include<math.h>

int main(){

	int i,n,flag=0,t;
	
	scanf("%d",&n);
	t=sqrt(n)/2;
	for(i=0;i<t;i++)
	{
		if(n%i == 0)
			{
				flag=1;
				break;
			}
	}
	
	if(flag==0)
		printf("prime number");
}
