#include<stdio.h>
#include<stdlib.h>
#define PI 22/7.0

float factorial(int n){
   if(n == 0 || n == 1)
   	return 1;
   return (float) n * factorial(n - 1);
}

float toThePower(float n, int m){
	float answer = 1;
	for ( int i = 1; i < m; i++)
		answer *= n;
	return answer;
}

int main(int argc, char* argv[]){

	int n = atoi(argv[1]);
	int count = 0;
	float x = 30 * (PI / 180.0);
	float sinX = x;

    for(int i = 3; i <= n; i = i + 2){
        sinX -= toThePower(x,i) / factorial(i);
    }

    printf("%f", sinX);
        
}