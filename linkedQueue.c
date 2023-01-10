#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
#include "linkedQueue.h"

void initLinkedQueue(Queue *q){
	q->front = NULL;
	q->rear  = NULL;
	q->count = 0;
}

void enQueue(Queue *q, int val){
	Node* nn = (Node*) malloc(sizeof(Node));
	nn->next = NULL;
	nn->prev = NULL;
	nn->data = val;
	if(q->front == NULL && q->rear == NULL)
		q->front = q->rear = nn;
	else{
		q->rear->next = nn;
		q->rear = q->rear->next;
	}	
	return;
}

int deQueue(Queue *q){
	if(isEmpty(*q))
		return INT_MIN;
	int returnValue = q->front->data;
	Node * temp = q->front;
	q->front = q->front->next;
	if(q->front == NULL)
		q->front = q->rear = NULL;
	free(temp);
	return returnValue;
}

int isEmpty(Queue q){
	if( q.front == NULL && q.rear == NULL)
		return true;
	return false;
}

