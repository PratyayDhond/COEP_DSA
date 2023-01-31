#define true 1
#define false 0

typedef struct Node{
	struct Node* next;
	struct Node* prev;
	int data;
}Node;

typedef struct Queue{
	Node* front;
	Node* rear;
	int count;
}Queue;

void initLinkedQueue(Queue *Q);
void enQueue(Queue *q, int val);
int deQueue(Queue *q);
int isEmpty(Queue q);