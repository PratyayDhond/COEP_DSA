#include<stdio.h>

int main(){
	char c;
	
	printf("Enter a character: ");
	c = getchar();
	
	if( (int) c >= 65 && (int) c <= 90){
		c =  ((int) c + 32);
		printf("Output: %d\n",c );
	}else if((int) c >= 97 && (int) c <= 122){
		c =  ((int) c - 32);
		printf("Output: %c\n",c );
	}else{
		printf("input error! Non-Alphabet character found!");
	}
	
	return 0;
}
