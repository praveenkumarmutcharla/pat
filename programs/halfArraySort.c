#include<stdio.h>

void swap(int *p,int *q){
  int t=*q;
  *q=*p;
  *p=t;
  }

void sort_asc(int a[], int start,int end){
  int i,j;
  for(i=start;i<end;i++){
    for(j=i+1;j<end-1;j++){
      if(a[i]>a[j])
        swap(&a[i],&a[j]);
    }
    
  }
}

void sort_dsc(int a[], int start,int end){
  int i,j;
  for(i=start;i<end;i++){
    for(j=i+1;j<end;j++){
      if(a[i]<a[j])
        swap(&a[i],&a[j]);
    }
    
  }
}
void display(int a[],int m,int n){
  printf("\n");
  for(int i=m;i<n;i++)
    printf("%d ",a[i]);
  }

int main(){
  int i,n,a[100],h;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("half - ");
  scanf("%d",&h);
  

  sort_asc(a,0,h);
  
  
  sort_dsc(a,h,n);
  
  
  display(a,0,n);
  
  
  }