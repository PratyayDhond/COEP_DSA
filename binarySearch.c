#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 10

int binarySearch(int arr[], int low, int high, int x){
    if(low > high)
        return -1;
    int mid = (low + high)/2;
    if(arr[mid] == x)
        return mid;
    else if(arr[mid] > high)
        return binarySearch(arr,low, mid-1, x);
    else 
        return binarySearch(arr,mid+1,high,x);
}

int linearSearch(int arr[], int x){
    for(int i = 0; i < SIZE; i++){
        if(arr[i] == x)
            return i;
    }
    return -1;
}

int main(){
    int arr[SIZE] = {1,12,23,45,67,84,96,101,124,239};
    int element = 8;

    int result = binarySearch(arr,0,SIZE,element);

    result = linearSearch(arr,element);
    if(result == -1)
        printf("Element %d not present in the array\n",element);
    else   
        printf("Element %d present at index %d\n",element,result); 
}
