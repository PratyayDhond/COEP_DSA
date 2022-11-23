/*
Find sum of digits in Even places
	From right to left **
	e.g. 54823 = 5 + 8 + 3
		  5 4 8 2 3
    index 4 3 2 1 0		
*/

#include<stdio.h>

int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	
	int sum = 0;
	int count = 0;
	
	while(number != 0){
		int temp = number % 10;
		number = number / 10;
		if(count % 2 == 0){
			sum += temp;	
		}
		count++;
	}
	
	printf("%d\n",sum);

	return 0;
}

