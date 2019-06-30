#include<stdio.h>
int main(){
	int i,j,n,m,k=0,a[100][100],c[100][3];
	
	scanf("%d %d",&n,&m);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
			{
					c[k][0]=i;
					c[k][1]=j;
					c[k][2]=0;
					k++;
					printf("%d %d %d",c[k][0],c[k][1],c[k][2]);
			}
		}
	}
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=3;j++)
			printf("%d",c[i][j]);
	}
}
