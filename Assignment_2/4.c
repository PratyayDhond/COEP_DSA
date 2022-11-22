#include<stdio.h>

void to_binary(int n){
	if(n < 0){
		return;
		printf("This program isn't configured for negative binary numbers");	
	}
		
	if(n == 0)
		return;
	
	to_binary(n/2);	
	printf("%d", n%2);
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	to_binary(n);
	printf("\n");
	return 0;
}


/*
7
111

5
101
*/
