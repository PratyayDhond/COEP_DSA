#include "linkedList.h"
#include<stdlib.h>
#include<stdio.h>

void initList(List *l){
    *l = NULL;
    return;
}

node* createNode(int value){
    node *nn = (node *) malloc(sizeof(node));
    nn->data = value;
    nn->next = NULL;
    return nn;
}

void append(List *l, int value){
    node *p = *l;    
    node *nn = createNode(value);

    if(!(*l)){
        *l = nn;
        return;
    }

    while(p->next){
        p = p->next;
    }
    p->next = nn;
    return;
}

void displayList(List l){
    while(l){
        printf("%d -> ",l->data);
        l = l -> next;
    }
    printf("NULL \n");
    return;
}

void pushFront(List *l, int value){
    node *p = *l;
    node *nn = createNode(value);
    if(!nn)
        return;
    if(!(*l)){
        *l = nn;
        return;
    }

    nn-> next = (*l);
    *l = nn;
    return;
}

void popBack(List *l){
    node *p = *l;

    if(!p)
        return;

    //error giving condition
    if(!p -> next){
        free(l);
        *l = NULL;
        return;
    }

    while(p -> next -> next){
        p = p->next;
    }

    node * temp = p -> next;
    int returnValue = p -> next -> data;
    p->next = NULL;
    free(temp);
}

void popFront(List *l){
    node *p = *l;

    if(!p)
        return;
    
    if(!p -> next){ 
        *l = NULL;
        return;
    }
    *p = *p->next;
    
    return;

// incomplete code 
void reverse(List *l){
    if(!l || !(*l) -> next )
        return;

    node *p = *l;
    node *q = p -> next; 
    node *temp = NULL;

    while(q){
        p -> next = temp;
        temp = q -> next;
        q -> next = p;

        p = q;
        q = temp;
        temp = p -> next;
    }

}
// 1 -> 2 -> 3 -> 4 -> NULL

// 1 -> 2 -> 3 -> 4 -> NULL
// p    q   

// 1 -> 2 -> 3 -> 4 -> NULL
