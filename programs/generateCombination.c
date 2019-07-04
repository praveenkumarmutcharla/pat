#include<stdio.h>

int s[100]={0};

void generate_combinations(int a[],int i,int s[],int j,int n){
    if(s[i]==0){
        generate_combinations(a,i+1,s,j+1,n);
    }
}
