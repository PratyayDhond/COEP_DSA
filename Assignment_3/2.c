#include<stdio.h>
#define SIZE 10

void findNearestGreaterAndLesser(int arr[], int indexForElement){
    //  used to store the nearest lesser and greater numbers
    int lesserThanNumber, greaterThanNumber;
    lesserThanNumber = greaterThanNumber = arr[indexForElement];
    
    // used to check for elements on left and right side of the current index
    int leftPointer, rightPointer;
    leftPointer = rightPointer = indexForElement;

    printf("Element at %d index: %d\n",indexForElement ,arr[indexForElement]);

    // looping till the both the pointers go out of the array's bounds
    while(leftPointer >= 0 || rightPointer < SIZE){

        // if left pointer is in bounds
        if(leftPointer >= 0){
            // if the current element is less than user selected element -> if the first condition is true check for second -> lesserThanNumber is the same as initialized
            if(arr[indexForElement] > arr[leftPointer] & lesserThanNumber == arr[indexForElement])
                lesserThanNumber = arr[leftPointer];

            // if the current element is greater than user selected element -> if the first condition is true check for second -> greaterThanNumber is the same as initialized
            if(arr[indexForElement] < arr[leftPointer] & greaterThanNumber == arr[indexForElement])
                greaterThanNumber = arr[leftPointer];

            leftPointer--;
        }

        // Checking if the right pointer has gone out of bounds for the array
        if( rightPointer < SIZE){
            
            // checking if the current element is less than user selected element
            if(arr[indexForElement] > arr[rightPointer]){
                
                //  if Nearest Lesser number is equal to initialised value
                if(lesserThanNumber == arr[indexForElement]){
                    lesserThanNumber = arr[rightPointer];
                
                if(lesserThanNumber > arr[rightPointer])
                    lesserThanNumber = arr[rightPointer];

                // else if difference between the two directional pointers from the user inputted index is equal  
                }else if(indexForElement - leftPointer == rightPointer - indexForElement){
                    lesserThanNumber =  arr[leftPointer] > arr[rightPointer] ? arr[rightPointer] : arr[leftPointer];
                }
            }


            // checking if the current element is greater than user selected element
            if(arr[indexForElement] < arr[rightPointer]){

                //  if -> Nearest Greater number is equal to initialised value
                if(greaterThanNumber == arr[indexForElement]){
                    greaterThanNumber = arr[rightPointer];

                
                // else if -> difference between the two directional pointers from the user inputted index is equal                  
                }
                
                if(indexForElement - leftPointer == rightPointer - indexForElement){
                    greaterThanNumber =  arr[leftPointer] < arr[rightPointer] ? arr[rightPointer] : arr[leftPointer];
                }
            }

            rightPointer++;
        }

        // if the values for nearest lesser and greater number have changed, break from the loop
        if(greaterThanNumber > arr[indexForElement] && lesserThanNumber < arr[indexForElement])
            break;
    }
    
    // if nearest lesser hasn't changed, no lesser value is present
    if(lesserThanNumber == arr[indexForElement])
        printf("No element in the array is lesser than %d\n", arr[indexForElement]);
    else
        printf("Nearest Lesser  number: %d\n", lesserThanNumber);

    // if nearest greater hasn't changed, no greater value is present
    if(greaterThanNumber == arr[indexForElement])
        printf("No element in the array is greater than %d\n", arr[indexForElement]);
    else
        printf("Nearest Greater number: %d\n", greaterThanNumber);

return;
}

int main(){

    int arr[SIZE];
    printf("Enter the %d elements of the array : ",SIZE);
    for(int i = 0; i < SIZE; i++)
        scanf("%d",&arr[i]);
    
    int indexForElement;
    int flag = 0;
    while(!flag){
        printf("Enter the index for the element (between 0-9): ");
        scanf("%d",&indexForElement);
        if(indexForElement >= 0 && indexForElement <= 9)
            flag = 1;
    }

    findNearestGreaterAndLesser(arr,indexForElement);

}