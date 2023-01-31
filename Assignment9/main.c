#include<stdio.h>
#include "linkedQueue.h"

int main(){
	Queue q; 
	initLinkedQueue(&q);
	enQueue(&q, 10);
	enQueue(&q, 20);
	enQueue(&q, 30);
	enQueue(&q, 40);
	enQueue(&q, 50);
	printf("%d ", deQueue(&q));
	printf("%d ", deQueue(&q));
	printf("%d ", deQueue(&q));
	printf("%d ", deQueue(&q));
	printf("%d ", deQueue(&q));
	printf("%d ", deQueue(&q));
}