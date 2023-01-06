#include<stdio.h>
#define SIZE 10

void findNearestGreaterAndLesser(int arr[], int indexForElement){

}

int main(){

    int arr[SIZE];
    printf("Enter the %d elements of the array : ",SIZE);
    for(int i = 0; i < SIZE; i++)
        scanf("%d",&arr[i]);
    
    int indexForElement;
    int flag = 0;
    while(!flag){
        printf("Enter the index for the element (between 0-9): ");
        scanf("%d",&indexForElement);
        if(indexForElement >= 0 && indexForElement <= 9)
            flag = 1;
    }

    findNearestGreaterAndLesser(arr,indexForElement);

}