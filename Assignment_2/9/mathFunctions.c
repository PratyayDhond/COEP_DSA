#include "mathFunctions.h"

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
