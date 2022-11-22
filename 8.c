#include<stdio.h>
#define false 0
#define true 1

int isPrime(int n){
	for(int i =2; i < n/2; i++){
		if( n % i == 0 )
			 return false;
	}
	return true;
}


int main(int charc, char* argv[]){
	printf("Prime numbers between the range of 1 - 100 \n");
	for(int i = 2; i < 100; i++){
		int flag = isPrime(i);
		if(flag == true)
			printf("%d ",i);		
	}
	printf("\n");
	return 0;
}
