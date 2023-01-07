#include<stdio.h>
#include "sort.h"

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}


int main(){
    // n is the size of the array
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int input;
    int flag = true;
    while(flag){
        printf("- 1. Print Array\n");
        printf("- 2. Perform Bubble Sort\n");
        printf("- 3. Perform Insertion Sort\n");
        printf("- 4. Perform Selection Sort\n");
        printf("- 5. Find Third Max\n");
        printf("- 6. Exit\n");
        printf("- input: ");
        scanf("%d",&input);

        switch(input){
            case 1:
                    printf("Array: ");
                    printArray(arr,n);
                    break;
            case 2:
                    bubbleSort(arr,n);
                    printf("Array has been sorted using bubble sort successfully!\n");
                    break;
            case 3:
                    insertionSort(arr,n);
                    printf("Array has been sorted using insertion sort successfully!\n");
                    break;
            case 4:
                    selectionSort(arr,n);
                    printf("Array has been sorted using selection sort sort successfully!\n");
                    break;
            case 5:
                   printf(" Third Max = %d",thirdMax(arr,n));
                   break;
            case 6:
                    flag = false;
                    return 0;
                    break; 
            default:
                    printf("You inputted incorrect option.");
                    fflush(stdin);
                    break;
        }
        printf("\n\n\n");   
    }

}
