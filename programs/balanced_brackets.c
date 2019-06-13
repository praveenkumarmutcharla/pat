#include<stdio.h>
#include<string.h>
#define MAX 1000
typedef char type;

typedef struct {
	int size;
	int top;
	type a[MAX];
}stack;

int isStackFull(const stack *s){
	if(s->top==s->size-1)
		return 1;
	else
		return 0;
}
int isStackEmpty(const stack *s){
	if(s->top==-1)
		return 1;
	else
		return 0;
}
type peek(const stack *s){
	if(isStackEmpty(s)==0){
		return s->a[s->top];
	}
	else{
		return 0;
	}

}

void push(stack *s,type e){
	if(isStackFull(s)==0){
		s->a[++(s->top)]=e;
	}
	else{
		printf("\nStack is FULL");
	}
	
}
void pop(stack *s){
	if(isStackEmpty(s)==0){
		 (s->top)--;
	}
	else{
		printf("\nstack is Empty");
	}
}

int main(){
	int i,n;
	char t[MAX];
	stack s={1000,-1};
	scanf("%s",t);
	for(i=0;t[i]!='\0';i++){
		if(t[i]=='(' || t[i]=='[' || t[i]=='{')
		{
			push(&s,t[i]);
		}
		else if(t[i]==')' || t[i]==']' || t[i]=='}') {
			if(t[i]==')' && peek(&s)=='(')
				pop(&s);
			else if(t[i]==']' && peek(&s)=='[')
				pop(&s);
			else if(t[i]=='}'  && peek(&s)=='{')
				pop(&s);
			else
				break;
		}
		else{
			;
		}
	}
	if(isStackEmpty(&s))
		printf("YES Balanced!");
	else
		printf("NO");
	

}


