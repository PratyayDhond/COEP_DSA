#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
	float cosX = 1;
	
	for(int i = 2; i <= n; i = i + 2 ){
		if(count %2 == 0){
			cosX -= toThePower(x, i) / factorial(i);
		}else{
			cosX += toThePower(x, i) /  factorial(i);
		}
		count++; 
	}	
	printf("%f", cosX);
}
