#include<stdio.h>
#include<stdlib.h>
#include "mathFunctions.h"
#define PI 22/7.0

int main(int argc, char* argv[]){
	int n = atoi(argv[1]);
	int count = 0;
	float x = 30 * (PI / 180.0);
	float cosX = 1;
	
	for(int i = 2; i <= n; i = i + 2 ){
		if(count %2 == 0){
			cosX -= toThePower(x, i) / factorial(i);
		}else{
			cosX += toThePower(x, i) /  factorial(i);
		}
		count++; 
	}	
	printf("cosX = %f", cosX);
}
