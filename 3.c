#include<stdio.h>
#define SIZE 10

int main(){
    int arr[SIZE];
    printf("Enter the %d elements of the array: ",SIZE);
    for(int i = 0; i < SIZE; i++){
        scanf("%d",&arr[i]);        
    }

        printf("\n");
    for(int i = 0; i < SIZE; i++ ){
        for(int j = 0; j < SIZE - i; j++)
            printf("%d ",arr[j]);
        printf("\n");
    }

}