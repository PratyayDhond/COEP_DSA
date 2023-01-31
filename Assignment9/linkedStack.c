#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

 typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef struct Stack{
    Node *top;
} Stack;

void initStack(Stack *s){
    s->top = NULL;
}

Node* newNode(int data){
    Node *nn = (Node*) malloc(sizeof(Node));
    nn ->data = data;
    nn ->next = NULL;
    return nn;
}

void push(Stack *s, int data){
    Node *nn = newNode(data);
    if(s->top == NULL)
        s->top = nn;
    else{
        nn->next = s->top;
        s->top = nn;
    }
}

int isEmpty(Stack s){
    if(s.top == NULL)
        return 1;
    return 0;
}

int pop(Stack *s){
    if(isEmpty(*s)){
        return INT_MIN;
    }

    Node * temp = s->top;
    s->top = s->top->next;
    int returnValue = temp->data;
    free(temp);
    return returnValue;
}

int main(){
    Stack s;
    initStack(&s);
    push(&s,5);
    push(&s,41);
    push(&s,42);
    push(&s,43);
    push(&s,44);
    push(&s,45);
    push(&s,46);
    push(&s,47);
    push(&s,48);
    push(&s,49);

    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
}