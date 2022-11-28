#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

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


int isSorted(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void linearSearch(int arr[], int n, int element){
    int i = 0;
    while(i < n){
        if(arr[i] == element){
            printf("The element %d is present at index %d.\n",element,i);
            return;
        }
        i++;
    }
    printf("The element %d is not present in the array.",element);
}

void bubbleSort(int arr[], int n){

    for(int i = 0; i < n - 1 ; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void insertionSort(int arr[], int n){
    
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i;
        while( j > 0 && arr[j-1] > key){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }
}

void selectionSort(int arr[], int n){
    int min;
    int min_index;
    for(int i = 0; i < n - 1 ; i++){
        min = arr[i];
        min_index = i;
        for(int j = i; j < n; j++){
            if(min > arr[j]){
                min = arr[j];
                min_index = j;
            }
        }
        if(min_index != i)
            swap(&arr[i], &arr[min_index]);

    }
}


void binarySearch(int arr[], int n, int element){
    if(!isSorted(arr, n)){
        // add a sort function here
        selectionSort(arr,n);
    }

    
}

int main(){
    // n is the size of the array
    int n = 10;
    int arr[n];

    populate_array(arr,n);
    printArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);
}