#include "stack.h"
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

    void initStack(Stack *s, int size){
         s->size = size;
         s->top = -1;
         s->arr = (float *) malloc(sizeof(float) * size);
         return;
    }

    float pop(Stack *s){
        return (isEmpty(*s) ? INT_MIN : s->arr[s->top--]);
    }

    void push(Stack *s, float value){
        if(!isFull(*s))
            s->arr[++s->top] = value;
    }

    int isEmpty(Stack stack){
        return stack.top == -1 ? true : false;
    }
    
    int isFull(Stack stack){
        return stack.top == (stack.size -1) ? true : false;
    }