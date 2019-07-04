#include<stdio.h>
int totalNoOfPaths(int m,int n){
    if(m==1 || n==1){
        return 1;
    }
        return totalNoOfPaths(m,n-1)+totalNoOfPaths(m-1,n);
        //return totalNoOfPaths(m,n-1)+totalNoOfPaths(m-1,n)+totalNoOfPaths(m-1,n-1); if diagnoal moves allowed
}

int totalNoOfPaths2(int cr,int cc,int m,int n){
    if( cr>m-1 || cc>n-1){
        return 0;
    }
    if(cr==m-1 && cc==n-1){
        return 1;
    }
    else{
        return totalNoOfPaths2(cr,cc+1,m,n)+totalNoOfPaths2(cr+1,cc,m,n);
    }
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int x=totalNoOfPaths(m,n);
    printf("\n%d",x);
}
