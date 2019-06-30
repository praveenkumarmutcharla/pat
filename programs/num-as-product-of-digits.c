
#include<stdio.h>
#include<stdlib.h>
int ans[100];
int a_k,l=0;

void minimum()
{
   int i=0,l=0,count=0;
   
    
   /*for(i=0;i<a_k;i+=1)
   {
       printf("%d ",ans[i]);
   }
   printf("\n");*/
       
   for(i=0;i<a_k;i+=1)
   {
      if(ans[i]*ans[i+1]<=9 && ans[i+1]!=0)
      {
      
      // printf("%d",ans[i]*ans[i+1]);
       ans[l++]=ans[i]*ans[i+1];
       count++;
       i++;
      }
       
      else
      {
       if(ans[i]!=0)
       {
           //printf("%d",ans[i]);
           ans[l++]=ans[i];
           
       }
           
       /*if(ans[i+1]!=0)
       {
           //printf("%d",ans[i+1]);
           ans[l++]=ans[i+1];
       }*/
      }
   }
   
   i=l;
   while(i<a_k)
       { ans[i]=0;
           i++;
       }
   
   
  
   
   if(count>=1)
   {
       a_k=l;
       minimum();
       
   }
   
}

void fact(int n)
{
   int a[100000];
   int i=0,k=0;
   for(i=2;i<=n/2;i++)
   {
       
       if(n%i==0)
       {
           
           a[k++]=i;
           //printf("%d\n",a[k-1]);
           
       }
   }
   
   ans[a_k++]=a[0];
   
   if(a[k-1]<9)
       ans[a_k++]=a[k-1];
   else
   {
        //free(a);
        fact(a[k-1]);   
   }
       
   
   
   
   
   
}
int main()
{
   int n,i,d,swap;
   
   scanf("%d",&n);
   if(n>9)
       fact(n);
   else
       printf("%d",n);
       
   minimum();
   
   
   
   
   for (i=0;i<a_k;i+=1)
 {
   for (d = 0 ; d < a_k - 1; d++)
   {
     if (ans[d] > ans[d+1]) /* For decreasing order use < */
     {
       swap       = ans[d];
       ans[d]   = ans[d+1];
       ans[d+1] = swap;
     }
   }
 }



   
   for(i=0;i<a_k;i+=1)
   {
       printf("%d",ans[i]);
   }
   
}
