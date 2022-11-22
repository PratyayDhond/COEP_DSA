#include<stdlib.h>
#include<stdio.h>
// Input has to be taken through command line for number of rows
int main(int argc, char *argv[]){
	
	int n = atoi(argv[1]);
	
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j <= i; j++)	
			printf("%d", j % 2);
		for(int j = 0; j < 2 * n - 2 * (i + 1); j++)
			printf(" ");
		for(int j = 0; j <= i; j++)
			printf("%d", j % 2);
		printf("\n");
	}
	
	return 0;
}
