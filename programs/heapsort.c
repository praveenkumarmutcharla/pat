#include<stdio.h>
void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
void heapify(int a[],int n,int i)
{
	int maxIndex=i;
	int lchild=2*i+1;
	int rchild=2*i+2;
	if(lchild<n && a[lchild]>a[maxIndex])
	 maxIndex=lchild;
	if(rchild<n && a[rchild]>a[maxIndex])
	 maxIndex=rchild;
	if(i!=maxIndex)
	{
		swap(&a[i],&a[maxIndex]);
		heapify(a,n,maxIndex);
		}	
}
void sort(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	 heapify(a,n,i);
	for(--n;n>=0;n--)
	{
		swap(&a[0],&a[n]);
		heapify(a,n,0);
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,n);
	for(int i=0;i<n;i++)
	 printf("%d ",a[i]);
}
