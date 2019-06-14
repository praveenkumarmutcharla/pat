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

void displayReverse(struct node *s){

	if(s!=NULL){
		displayReverse(s->next);
		printf("%d ",s->data);
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
	return s;
}

void insertAfterThis(struct node* s,int n,int e){
	struct node* t=newNode(e);
	struct node* head=searchNode(s,n);
	if(head!=NULL){
		t->next=head->next;
		head->next=t;
	}
	else{	
		return;
	}
}

struct node* insertAtPos(struct node* s,int n,int e){
	
	if(n==1){
		insertAtBegin(s,e);
	}
	else{
		struct node* t=newNode(e);
		struct node* head=getPosition(s,n);
		if(head!=NULL){
			t->next=head->next;
			head->next=t;
			return s;
		}
		else{
			return s;
		}
	}
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
		free(s->next);
		s->next=NULL;
		return s1;
	}
}

void deleteAfterThis(struct node *s,int n){
	struct node* head=searchNode(s,n);
	if(head==NULL){
		return ;
	}
	else if(head->next==NULL){
		return ;
	}
	else{
		head->next=head->next->next;
		return ;
	}
}

struct node* deleteAtPos(struct node* s,int n){
	
	if(n==1){
		deleteAtBegin(s);
	}
	else{
		//struct node* t=NULL;
		struct node* head=getPosition(s,n);
		if(head!=NULL && head->next!=NULL){
			head->next=head->next->next;
		return s;
		}
	}
}


int main(){
	int i;
	struct node* t=NULL;
	display(t);
	
	t=insertAtBegin(t,4);
	
	display(t);// 4
	
	t=deleteAtEnd(t);
	
	t=insertAtBegin(t,7);
	
	display(t);//7
	
	t=deleteAtBegin(t);//deleting one element at begining
	
	display(t); // empty
	
	
	t=insertAtBegin(t,5);
	t=insertAtBegin(t,6);
	
	t=insertAtEnd(t,1);
	t=insertAtEnd(t,2);

	display(t); // 6 5 1 2
	
	insertAfterThis(t,9,3);
	
	insertAfterThis(t,5,3);//inserting after 5
	
	display(t); // 6 5 3 1 2
	
	t=deleteAtBegin(t);
	
	display(t); // 5 3 1 2
	printf("\n");
	displayReverse(t);
	
	t=deleteAtEnd(t);
	
	display(t);// 5 3 1
	
	deleteAfterThis(t,2);
	
	display(t);
	
	deleteAfterThis(t,5);
	
	display(t);
	
	
	t=insertAtPos(t,1,2);
	display(t);
	
	t=insertAtBegin(t,6);
	
	t=insertAtEnd(t,8);
	
	display(t);
	
	t=deleteAtPos(t,2);
	
	display(t);
	
}




