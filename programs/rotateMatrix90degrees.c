#include<stdio.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void rotate90degrees(int *a,int i,int j,int n){
    if(i >n-1 || j>n-1){
        return 0;
    }
    else{
        
        rotate90degrees(a,i+1,j+1,n);
    }
}


int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    rotate90degrees((int *)a,0,0,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}