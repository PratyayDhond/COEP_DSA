#include<stdio.h>
#include "myHeader.h"
#include "linkedList.h"

int main(){
    // int arr[] = {123,122,34,14,5};
    // int sortedArray[sizeof(arr)/sizeof(arr[0])];
    // printArray(arr, sizeof(arr)/sizeof(arr[0]));
    // selectionSort(arr,5);
    // printArray(arr, sizeof(arr)/sizeof(arr[0]));
    
    List l1;
    initList(&l1);
    pushFront(&l1, 14);
    append(&l1,5);
    displayList(l1);
    append(&l1,10);
    displayList(l1);
    popBack(&l1);
    displayList(l1);
    popBack(&l1);
    displayList(l1);
    popBack(&l1);
    displayList(l1);
    append(&l1, 15);
    append(&l1, 13);
    append(&l1, 11);
    displayList(l1);
    popFront(&l1);
    displayList(l1);
    popFront(&l1);
    displayList(l1);
    popFront(&l1);
    displayList(l1);
   
    
    // pushFront(&l1,4);
    // displayList(l1);

    // pushFront(&l1,44);
    // displayList(l1);

    // popBack(&l1);
    // popBack(&l1);
    // popBack(&l1);
    // popBack(&l1);
    // displayList(l1);    
    return 0;
}