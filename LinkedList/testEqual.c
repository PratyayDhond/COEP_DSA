#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"

int testEqual(List l1, List l2){
    node *p = l1;
    node *q = l2;

    if(!p && q || !q && p)
        return -1;

    while(p && q){
        if(p -> data != q-> data)
            return -1;
        p = p -> next;
        q = q -> next;
    }

    if(p || q)
        return -1;

    return 1;
}

void deleteDuplicates(List *l){
    node *p = *l;

    if(!p)
        return;

    if(!p ->next)
        return;

    node * q;
    q = p -> next;    
    while(p && q){
        if(p->data == q ->data){
            p->next = q->next;
            node *temp = q;
            free(temp);            
            q = p -> next;
        }else{
            p = p ->next;
            q = q->next;
        }
    }    

}
int main(){
    List l1,l2,l3;
    initList(&l1);
    initList(&l2);
    initList(&l3);

    append(&l1,1);
    append(&l1,2);
    append(&l1,3);
    append(&l1,3);
    
    append(&l2,1);
    append(&l2,1);
    append(&l2,2);
    append(&l2,2);
    
    append(&l3,5);
    append(&l3,5);
    append(&l3,5);
    append(&l3,5);

    // printf("%d\n",testEqual(l1,l2));
    // printf("%d\n",testEqual(l1,l3));
    // printf("%d\n",testEqual(l2,l3));
    displayList(l1);
    deleteDuplicates(&l1);
    displayList(l1);


    displayList(l2);
    deleteDuplicates(&l2);
    displayList(l2);

    displayList(l3);
    deleteDuplicates(&l3);
    displayList(l3);
    
}