#include<stdio.h>
#include "mathFunctions.h"
#include<stdlib.h>
#define PI 22/7.0

int main(int argc, char* argv[]){

	int n = atoi(argv[1]);
	int count = 0;
	float x = 30 * (PI / 180.0);
	float sinX = x;

    for(int i = 3; i <= n; i = i + 2){
        sinX -= toThePower(x,i) / factorial(i);
    }

    printf("sinX = %f", sinX);
        
}