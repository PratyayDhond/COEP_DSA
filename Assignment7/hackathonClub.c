#include "hackathonClub.h"
#include<stdlib.h>
#include<stdio.h>

void initList(List *l){
    *l = NULL;
    return;
}

void display(List l1){
    Node *p = l1;
    int count = 0;
    char * post;
    while(p){
        if(count++ == 0)
            post = "President";
        else if(p -> next == NULL)
            post = "Secretary";
        else
            post = "Member";

        printf("%d %s %s\n",p->PRN, p->name, post);
        p = p -> next;
    }
}



int addMemberToList(List *l1, char* name, int PRN){
    Node * nn = (Node*) malloc (sizeof(Node));
    nn->name = name;
    nn->PRN = PRN;
    nn->next = NULL;
    if(!*l1)
        addPresident(l1, name, PRN);
    else if((*l1)->next == NULL)
        addSecretary(l1,name,PRN);
    else{
        nn -> next = (*l1)->next;
        (*l1)->next = nn;
    }    
}

void addPresident(List *l1, char *name, int PRN){
    Node * nn = (Node *) malloc(sizeof(Node));
    nn->name = name;
    nn->PRN = PRN;
    nn->next = NULL;

    if(!*l1)
        *l1 = nn;  
    else{
        Node *p = *l1;
        nn ->next = p->next;
        p->next = nn;
    }
    return;
}
void addSecretary(List *l1,char *name, int PRN){
    Node * nn = (Node * ) malloc (sizeof(Node));
    nn->next = NULL;
    nn->PRN = PRN;
    nn->name = name;

    if(!*l1)
        return;
    Node *p = *l1;
    while(p->next)
        p = p -> next;
    p->next = nn;
}


void deletePresident(List *l1){
    Node * p = *l1;
    *l1 = (*l1) -> next;
    free(p);
}
void deleteSecretary(List *l1){
    Node * p = *l1;
    Node *temp;
    while(p->next){
        temp = p;
        p = p->next;
    }
    free(p);
    temp->next = NULL;
}

void deleteMember(List *l1, int PRN){
    Node * p = *l1;
    Node *temp;

    if((*l1) -> PRN == PRN){
        deletePresident(l1);
    }else
        while(p){
            if(p->PRN == PRN){
                temp ->next = p->next;
            }
            temp = p;
            p = p -> next;
        }
}

int totalMembers(List l1){
    int count = 0;
    Node *p = l1;

    while(p){
        count++;
        p = p -> next;
    }
    return count;
}