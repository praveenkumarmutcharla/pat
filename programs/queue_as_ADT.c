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
	if(q->rear==q->size-1)
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
		return q->a[q->front];
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
		if(q->rear == -1){
			q->front = q->rear=0;
		}
		else{
			(q->rear)++;
		}
		q->a[q->rear]=e;
		printf("\n%d",q->a[q->rear]);
	}
}
void dequeue(queue *q){
	if(q->front==q->rear){
		q->front = q->rear=-1;
	}
	else{
		(q->front)++;
	}
}
int main(){
	int i,j,n;
	queue q={10,-1,-1};
	for(i=1;i<=5;i++)
		enqueue(&q,i*10);
	printf("\nAt front %d",atFront(&q));
	for(i=1;i<=3;i++)
		dequeue(&q);
	printf("\nAt front %d",atFront(&q));
}
