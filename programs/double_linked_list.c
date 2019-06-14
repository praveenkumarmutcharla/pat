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

struct node* getLastNode(struct node* s){
	while(s->next->next!=NULL){
		s=s->next;
	}
	return s;
}

struct node* getPosition(struct node* s,int n){
	struct node* head=s;
	for(int i=0;i<n-2;i++){
		head=head->next;
	}
	
	return head;	
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
	t->prev=head;
	return s;
}



struct node* deleteAtBegin(struct node* s){
	if(s==NULL){
		
		return NULL;
	}
	else{
		return s->next;
	}
	
}
struct node* deleteAtEnd(struct node* s){
	struct node* s1=s;
	if(s->next==NULL){
		
		return NULL;
	}
	else{
		s=getLastNode(s);
		printf("\n%d",s->data);
		free(s->next);
		s->next=NULL;
		return s1;
	}
}



int main(){
	int i;
	struct node* t=NULL;
	
	t=insertAtBegin(t,3);
	t=insertAtEnd(t,2);
	t=insertAtBegin(t,5);
	t=insertAtEnd(t,4);
	
	
	display(t);
	
	
}




