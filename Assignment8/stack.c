#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

    void initStack(Stack *s, int size, char* str){
         s->size = size;
         s->top = -1;
         s->arr = (char *) malloc(sizeof(char) * size);
         for(int i = 0; i < s->size -1; i++){
            push(s,str[i]);
         }
         return;
    }

    char pop(Stack *s){
        return (isEmpty(*s) ? ' ' : s->arr[s->top--]);
    }

    void push(Stack *s, char value){
        if(!isFull(*s))
            s->arr[++s->top] = value;
    }

    int isEmpty(Stack stack){
        return stack.top == -1 ? true : false;
    }
    
    int isFull(Stack stack){
        return stack.top == (stack.size -1) ? true : false;
    }

    void printStringAndItsReverse( char *str, int size){
         printf("Input String   : %s\n",str);
         
         Stack s1;
         initStack(&s1,size,str);
         printf("Reverse String : ");
         while(!isEmpty(s1)){
            printf("%c",pop(&s1));
         }
         printf("\n");
    }

    int isPalindrome(char *str, int size){
            Stack s1;
            initStack(&s1, size, str);
            int i = 0;
            while(!isEmpty(s1)){
                if(pop(&s1) != str[i++] )
                    return false;
            }
        return true;
    }
