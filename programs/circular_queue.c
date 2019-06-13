#include<stdio.h>

#define MAX 1000
typedef int type;

typedef struct {
	int size;
	int front;
	int rear;
	type a[MAX];
}queue;

int isFull(const queue *q){
	if(((q->rear+1)%q->size)==q->front)
		return 1;
	else
		return 0;
}
int isEmpty(const queue *q){
	if(q->rear==-1 || q->front==-1)
		return 1;
	else
		return 0;
}

type atFront(const queue *q){
	if(isEmpty(q)==0){
		return q->a[(q->front)%q->size];
	}
	else{
		return 0;
	}
}
type atRear(const queue *q){
	if(isEmpty(q)==0){
		return q->a[(q->rear)%q->size];
	}
	else{
		return 0;
	}
}
void enqueue(queue *q,type e){
	if(isFull(q)==1){
		printf("Queue is FULL");
	}
	else{
		if((q->rear) == -1){
			q->front = q->rear=0;
		}
		else{
			q->rear=((q->rear+1)%q->size);
		}
		q->a[q->rear]=e;
		
	}
}
void dequeue(queue *q){
	if(q->front==q->rear){
		q->front = q->rear=-1;
	}
	else{
		q->front=((q->front+1)%q->size);

	}
}
void display(const queue *q){
	int i=q->front;
	printf("\n");
	
	if(isEmpty(q)==0){
		for(;i!=q->rear;i=(i+1)%q->size){
			printf("%d ",q->a[i]);
		}
		printf("%d ",q->a[q->rear]);	
	}
	printf("\n");
}
int main(){
	int i,j,n;
	queue q={5,-1,-1};
	for(i=1;i<=5;i++)
		enqueue(&q,i*10);
		
	display(&q);
	
	for(i=1;i<=3;i++)
		dequeue(&q);
		
	display(&q);
	
	for(i=19;i<=20;i++)
		enqueue(&q,i*10);
		
	display(&q);
	
	for(i=1;i<=2;i++)
		dequeue(&q);
	
	display(&q);
}
