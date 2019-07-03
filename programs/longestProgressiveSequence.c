#include<stdio.h>
int main(){
    int n,i,j,x;
    int min,max=0,tmin,tmax=0;
    int a[100],b[100],res[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=tmin=0;
    for(i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            tmax++;
        }
        else{
            if((tmax-tmin) > (max-min)){
                max=tmax;
                min=tmin;
            }
            tmin=tmax+1;
            tmax=i+1;
        }
    }
    if((tmax-tmin) > (max-min)){
                max=tmax;
                min=tmin;
            }

    for(i=min;i<max+1;i++)
        printf("%d ",a[i]);
    
}