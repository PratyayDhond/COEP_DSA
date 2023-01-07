#include<stdio.h>
#include<limits.h>
#include "sort.h"

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
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

int findMax(int arr[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int thirdMax(int arr[], int n){

    int i, max, secondMax, thirdMax;
 
    /* There should be atleast three elements */
    if (n < 3) {
        return findMax(arr,n);
    }
 
    thirdMax = max = secondMax = INT_MIN;
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            thirdMax = secondMax;
            secondMax = max;
            max = arr[i];
        }
 
        else if (arr[i] > secondMax) {
            thirdMax = secondMax;
            secondMax = arr[i];
        }
 
        else if (arr[i] > thirdMax)
            thirdMax = arr[i];
    }

    if(thirdMax == max || secondMax == max)
        return max;

    return thirdMax;
}