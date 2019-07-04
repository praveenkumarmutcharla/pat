#include<stdio.h>
int main(){
    
    int i,j,m,n;
    scanf("%d %d",&m,&n);

    int a[10][10];
    int v[10][2];
    int x=0,y;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                v[x][0]=i;
                v[x++][1]=j;
            }
        }
    }
    int t=0;
    while(t<x){
        y=v[t][1];
        for(i=0;i<m;i++)
            a[i][y]=0;
        y=v[t][0];
        for(i=0;i<n;i++)
            a[y][i]=0;
        t++;
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}