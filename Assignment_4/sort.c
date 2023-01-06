
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

