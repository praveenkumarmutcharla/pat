#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};
struct node* head;
void insert(int data);
void print(struct node* temp){
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
}
}
int main(){
	int i,n,x;
	scanf("%d",&n);
	head=NULL;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		insert(x);
	}
	print(head);
	return 0;
}
void insert(int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(head!=NULL)
		temp->next=head;
	head=temp;
}


	
	

