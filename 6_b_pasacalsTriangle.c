#include<stdio.h>

int main(int argc, char* argv[]){
	int n = atoi(argv[1]);
	int count = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < i; j++){
			printf("%d ", count++ );
		}
		printf("\n");
	}
	
	return 0;
}
