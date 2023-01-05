#include "hackathonClub.h"
#include<stdio.h>
int main(){
    List l1;
    initList(&l1);
    addMemberToList(&l1, "Soham Dombale ", 142203005);
    addMemberToList(&l1, "Omkar Kedari ", 142209004);
    addMemberToList(&l1, "Chinmay Sheth ", 142203003);
    addMemberToList(&l1, "Pratyay Dhond ", 142203004);

    display(l1);   
    printf("Total Members : %d\n",totalMembers(l1));

    deleteMember(&l1, 142203005);
    display(l1);   
    printf("Total Members : %d\n",totalMembers(l1));

    deleteMember(&l1,142209004);
    display(l1);   
    printf("Total Members : %d\n",totalMembers(l1));

}