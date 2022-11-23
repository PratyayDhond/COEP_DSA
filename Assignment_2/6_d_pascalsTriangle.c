#include<stdio.h>
#include<stdlib.h>

int main(int charc, char *argv[]){
	int n = atoi(argv[1]);
	int arr[n];
	for(int i = 0; i < n; i++){
		int tempArr[n];
		
		// Used for accessing the values in the temporary array
		int count = 0;
		for(int j = 0; j < n - i; j++){
			printf(" ");
		}
		// Start rows of 1's
		printf("1 ");
		tempArr[count++] = 1;
		
		//Storing the values for previous line in an temporary array
		for(int j = 1; j < i ; j++){
			int no = arr[j] + arr[j-1];
			tempArr[count++] = no;
			printf("%d ", no);
		}				
		
		// End row of 1's
		if(i != 0){		
			printf("1");
			// Adding 1 as the last element in the array
			tempArr[count++] = 1;
		}
		
		printf("\n");
		
		// Updating the Array with the current Row's values temporary array 
		for(int i = 0; i < count; i++)
			arr[i] = tempArr[i];
	}
}
