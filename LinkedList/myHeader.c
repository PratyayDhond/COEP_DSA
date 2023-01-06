#include "myHeader.h"
#include<stdio.h>
#include<limits.h>

void printToBinary(int n){

    if(n == 0)
        return;

    printToBinary(n/2);
    printf("%d", n % 2);
    return;
}

void towerOfHanoi(int numberOfDisks, char Source, char Intermidiate, char Destination){
    if(numberOfDisks == 0)
        return;
    
    if (numberOfDisks == 1){
        printf("Moved disk %d from %c to %c\n",numberOfDisks,Source,Destination);
        return;
    }

    towerOfHanoi(numberOfDisks-1, Source, Destination, Intermidiate);
        printf("Moved disk %d from %c to %c\n",numberOfDisks,Source,Destination);
    towerOfHanoi(numberOfDisks-1,Intermidiate, Source, Destination);        

}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void copyArray(int copyFrom[], int size, int copyTo[]){
    for(int i = 0; i < size; i++){
        copyTo[i] = copyFrom[i];
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i <n-1; i++){
        for(int j = 0; j < n - i-1; j ++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }

}

void selectionSort(int arr[], int n){
    int minIndex = 0;
    for(int i = 0; i < n; i++){
        minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(&arr[i], &arr[minIndex]);
    }   
}

void insertionSort(int arr[], int n, int sorted[]){
    int key;
    for(int i = 1; i < n; i++){
        key = arr[i];
        int j = i-1;

        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    copyArray(arr,n,sorted);
}    

int partition(int a[], int l, int h){
    int pivot = a[l];
    int start = l;
    int end = h;

    while(start < end){
        while(a[start] < pivot)
            start++;
        while(a[end] > pivot)
            end--;
        if(a[start] > a[end]){
            swap(&a[start], &a[end]);
            swap(&start, &end);
        }
    }
    swap(&a[l], &a[end]);
    return end;
}

void QuickSort(int arr[], int l, int h){
    
    if(l < h){
    int index = partition(arr,l,h);
    QuickSort(arr,l,index - 1);
    QuickSort(arr, index+1, h);
    }

}
