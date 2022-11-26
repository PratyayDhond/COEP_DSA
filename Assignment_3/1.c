#include<stdio.h>



/*
Logic for the swap function
x = 5 y = 7
x = x + y    |  x = 12
y = x - y    |  y = 5
x = x - y    |  x = 7
*/
void swap_without_additional_variables(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)  
        printf("%d ",arr[i]);
    printf("\n");
}

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d elements for the array: ",n);

    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    
    printf("Original Array : " );
    printArray(arr,n);

    for(int i = 0, j = n-1; i < j; i++, j--)
        swap_without_additional_variables(&arr[i], &arr[j]);
    
    printf("Reversed Array : " );
    printArray(arr,n);

    return 0;
}