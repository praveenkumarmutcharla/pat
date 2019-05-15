#include<stdio.h>
void main(){
	
	int i,n,a[100],t,j=0,count=0;
	scanf("%d",&n);
	t=n;
	while(t>1){
		count=0;
		for(i=t;i>0;i--)
		{
			if(t%i==0)
				count++;
		}
		if(count==2){
			a[j]=t;
			j++;
		}
		t--;
	}
	for(i=0;i<j;i++)
	{
		if((a[i]-a[i+1]==2)){
			printf("%d %d \n",a[i],a[i+1]);
		}
	}
}
