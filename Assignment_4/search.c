#include<stdio.h>

#define false 0
#define true 1
int isSorted(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
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
    printf("The element %d is not present in the array.\n",element);
}
int binarySearch(int arr[], int low, int high, int element){
    if(high > low){
        int mid = (low + high)/2;
        if(arr[mid] == element){
            printf("Element %d found at index %d \n",arr[mid], mid);
            return 1;
        }

        if(arr[mid] > element)
            return binarySearch(arr, 0, mid - 1, element);

        return binarySearch(arr, mid + 1, high, element);

    }
    return false;
}

