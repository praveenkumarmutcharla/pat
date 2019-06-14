#include<stdio.h>
#include<stdlib.h>
typedef int type;
struct node{
	type data;
	struct node* next;
};

struct node* newNode(type e){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=e;
	temp->next=NULL;
	return temp;
}

void display(struct node* s){
	struct node* t=s;
		printf("\n ");
	if(t==NULL){
		printf("List is empty");
		return;
	}
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
}
struct node* searchNode(struct node* s,type e){
	struct node* head=s;
	while(s->data!=e){
		if(s->next==NULL)
			return NULL;
		else{
			s=s->next;
		}
	}
	return s;
}

struct node* insertAtBegin(struct node* s,type e){
	struct node* t= newNode(e);
	t->next=s;
	return t;
}

struct node* insertAtEnd(struct node* s,type e){
	struct node* t=newNode(e);
	struct node* head=s;
	if(s==NULL)
		return t;
	while(head->next!=NULL){
		head=head->next;
	}
	head->next=t;
	return s;
}

struct node* merge(struct node* s1,struct node* s2){
	struct node* s3=NULL;

	while(s1!=NULL && s2!=NULL){
		if(s1->data <= s2->data){
			s3=insertAtEnd(s3,s1->data);
			s1=s1->next;
		}
		else{
			s3=insertAtEnd(s3,s2->data);
			s2=s2->next;
		}
	}
	while(s1!=NULL){
		s3=insertAtEnd(s3,s1->data);
		s1=s1->next;
		
	}
	while(s2!=NULL){
		s3=insertAtEnd(s3,s2->data);
		s2=s2->next;
			
	}

	return s3;
		
}

int main(){
	struct node* s1=NULL;
	struct node* s2=NULL;
	
	s1=insertAtBegin(s1,3);
	s1=insertAtBegin(s1,2);
	s1=insertAtBegin(s1,1);
		
	display(s1);
	
	s2=insertAtBegin(s2,6);
	s2=insertAtBegin(s2,5);
	s2=insertAtBegin(s2,4);

	display(s2);

	struct node* s3=merge(s1,s2);
	
	display(s3);
}
