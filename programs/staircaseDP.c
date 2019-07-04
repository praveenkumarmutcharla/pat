#include<stdio.h>   
int staircase(int h){
    if(h<=1)
        return h;
    else{
        return staircase(h-1)+staircase(h-2);
    }
}

int totalways(int l,int h){
    if(l>h){
        return 0;
    }
    if(l==h){
        return 1;
    }
    else{
        return totalways(l+1,h)+totalways(l+2,h);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int x=staircase(n+1);
    // int x=totalways(0,n);
    printf("\n %d",x);
}