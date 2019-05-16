#include<stdio.h>
int main(){
	
	int n,a[10][10],flag=1,i,j;
	
	scanf("%d",&n);
	printf("matrix values");
	for(i=0;i<n;i++){
	
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);

				if(i==j && (a[i][j]!=1)){
					flag=0;
					break;
				}
				else{
					if(a[i][j]!=0){
					flag=0;
					break;
					}
				}
			}
		}
		if(flag==1)
			printf("yes");
		else
			printf("Not Idendity");

}
	

