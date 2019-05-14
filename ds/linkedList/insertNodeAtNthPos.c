#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head;

void insert(int x,int n);
void print(struct node* temp);

int main(){
	head=NULL;
	insert(2,1);
	insert(3,2);
	insert(4,3);
	insert(9,2);
	print(head);
	
	return 0;
}

void insert(int data,int n){
	int i=0;
	struct node* temp1=(struct node*)malloc(sizeof(struct node));
	
	temp1->data=data;
	temp1->next=NULL;
	
	if(n == 1){
		temp1->next=head;
		head=temp1;
		return;
	}
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		temp=head;
		
		for(i=0;i<n-2;i++){
			temp=temp->next;
			}
		temp1->next=temp->next;
		temp->next=temp1;
}
void print(struct node* temp){
	while(temp!=NULL)
	{
		printf("%d -> ",temp->data);
		temp=temp->next;
}
}
