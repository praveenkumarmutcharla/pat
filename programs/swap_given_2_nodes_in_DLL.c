#include<stdio.h>
#include<stdlib.h>
typedef int type;
struct node{
	struct node* prev;
	type data;
	struct node* next;
};

struct node* newNode(type e){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=NULL;
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


struct node* getPosition(struct node* s,int n){
	struct node* head=s;
	for(int i=0;i<n-2;i++){
		head=head->next;
	}
	
	return head;	
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

struct node* insertAtEnd(struct node* s,type e){
	struct node* t=newNode(e);
	struct node* head=s;
	if(s==NULL)
		return t;
	while(head->next!=NULL){
		head=head->next;
	}
	head->next=t;
	t->prev=head;
	return s;
}



struct node* swap(struct node* s,type x,type y){
	struct node* s1=searchNode(s,x);
	struct node* s2=searchNode(s,y);
	
	struct node* s1p=s1->prev;
	struct node* s2p=s2->prev;
	struct node* s1n=s1->next;
	struct node* s2n=s2->next;
	
	
	if(s1!=NULL || s2!=NULL){
		
		
	
	}
	
	return s;
}

int main(){
	int i;
	struct node* t=NULL;
	
	t=insertAtEnd(t,3);
	t=insertAtEnd(t,2);
	t=insertAtEnd(t,5);
	t=insertAtEnd(t,4);
	
	display(t);
	
	t= swap(t,2,4);
	
	display(t);
	
}




