#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

#include "sort.h"
#include "search.h"

#define true 1
#define false 0
#define RANDOM_LIMIT 1000

void populate_array(int arr[], int n){

    // used to set the parameter of random number generator to the current time 
    // Using this makes the numbers random for every run of the program
    srand(time(0));

    for(int i = 0; i < n; i++){
        arr[i] = rand() % RANDOM_LIMIT;
    }

    return;
}



void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}



void binarySearchMenu(int arr[], int n, int element){
    if(!isSorted(arr, n)){
        // add a sort function here
        selectionSort(arr,n);
    }

   if(! binarySearch(arr, 0, n, element) )
        printf("Element %d not found in the array\n",element);
}

int main(){
    // n is the size of the array
    int n = 10;
    int arrayPopulated = false;
    int arr[n];
    int input; 
    int element;
    int flag = true;
    while(flag){
        printf("Options: \n\n");
        if(arrayPopulated)
            printf("- 1. Re-populate Array\n");
        else
            printf("- 1. Populate Array\n");
        printf("- 2. Print Array\n");
        printf("- 3. Perform Bubble Sort\n");
        printf("- 4. Perform Insertion Sort\n");
        printf("- 5. Perform Selection Sort\n");
        printf("- 6. Perform Linear Search\n");
        printf("- 7. Perform Binary Search\n");
        printf("- 8. Exit\n");
        printf("- input: ");
        scanf("%d",&input);

        switch(input){
            case 1:
                    populate_array(arr,n);
                    printf("Array has been populated with random elements\n");
                    break;
            case 2:
                    printf("Array: ");
                    printArray(arr,n);
                    break;
            case 3:
                    bubbleSort(arr,n);
                    printf("Array has been sorted using bubble sort successfully!\n");
                    break;
            case 4:
                    insertionSort(arr,n);
                    printf("Array has been sorted using insertion sort successfully!\n");
                    break;
            case 5:
                    selectionSort(arr,n);
                    printf("Array has been sorted using selection sort sort successfully!\n");
                    break;
            case 6:
                    printf("Enter the element to search: ");
                    scanf("%d",&element);
                    linearSearch(arr,n,element);
                    break;
            case 7:
                    printf("Enter the element to search: ");
                    scanf("%d",&element);
                    binarySearchMenu(arr,n,element);
                    break;
            case 8:
                    flag = false;
                    return 0;
                    break; 
            default:
                    printf("You inputted incorrect option.");
                    fflush(stdin);
                    break;

        }

        system("pause"); 
        system("cls");   
    }

}