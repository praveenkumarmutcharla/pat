#include<stdio.h>

int max(int x,int y){
    return x > y ? x:y;
}

int thiefMax(int a[],int l,int h){
    if(l>=h){
        return 0;
    }
    else{
        return max(a[l]+thiefMax(a,l+2,h),thiefMax(a,l+1,h));
    }
}

int maxLoot(int a[],int n){
    if(n==0){
        return 0;
    }
    if (n==1){
        return a[0];
    }
    if(n==2){
        return max(a[0],a[1]);
    }

    int d[100];
    d[0]=a[0];
    d[1]=max(a[0],a[1]);

    for(int i=2;i<n;i++){
        d[i]=max(a[i]+d[i-2],d[i-1]);
    }

    return d[n-1];
}
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int x=thiefMax(a,0,n);
    printf("\n %d",x);
    int y=maxLoot(a,n);
    printf("\n %d",y);

}