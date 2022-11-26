#include<stdio.h>
#define SIZE 20

int main(){

    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int sum = 0;

    for(int i = 0; i < SIZE; i++)
        if(arr[i] % 2 == 0)
            sum += arr[i];
    printf("sum of even elements of the array: %d",sum);
}