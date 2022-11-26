#include<stdio.h>

int numberOfOnes = 0;

void to_binary(int n){
	if(n < 0){
		return;
		printf("This program isn't configured for negative binary numbers");	
	}
		
	if(n == 0)
		return;
	
	to_binary(n/2);
	if(n%2 == 1)	numberOfOnes++;	
	printf("%d", n%2);
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	to_binary(n);
	printf("\n");
	printf("Number of 1's: %d",numberOfOnes);
	return 0;
}


/*
7
111

5
101
*/
