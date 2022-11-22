#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int n =  atoi(argv[1]);
	char c = '*';
	
	for(int i = 1; i <= n; i++ ){
		
		for(int j = 1; j <= n - i; j++){
			printf("  ");
		}
		
		for(int j = 1; j < 2*i; j++){
			
			printf("%c",c);							
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;	
}
