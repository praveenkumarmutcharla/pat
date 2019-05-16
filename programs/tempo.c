#include<stdio.h>
int main()
{
int i,j,n,c,k=0,a[20]={0},t,r=0;
scanf("%d",&n);
for(i=2;i<=n;i++)
{
	c=0;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
			c++;
	
		if (c==2)
		a[k++]=i;
	}
	for(i=0;i<k;i++)
	{
	for(j=i+1;j<k;j++)
		if (a[i]+a[j]==n)
		{
			printf("%d+%d=%d",a[i],a[j],n);
			r=1;
			break;
		}
	}
	if (r!=1)
	printf("NOt possible");
	return 0;
}
