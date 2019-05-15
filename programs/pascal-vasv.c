#include<stdio.h>
#include<math.h>
void main()
{
int n,i,j=0,sp,k,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(sp=i;sp<=n;sp++)
printf(" ");
k=pow(11,j);
while(k!=0)
{
t = k %10;
printf("%d ",t);
k = k/10;
}
j++;
printf("\n");
}
}
