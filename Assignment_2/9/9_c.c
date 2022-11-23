#include<stdio.h>
#include<stdlib.h>
#include "mathFunctions.h"
#define PI 22/7.0

int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
	int count = 0;
	float x = 30 * (PI / 180.0);
	float e_raised_to_x = 1 + x;

	// calculates till n
	for(int i = 2; i <= n; i++){
		e_raised_to_x += toThePower(x,i)/factorial(i);
	}

	printf("e^x = %f",e_raised_to_x);

}