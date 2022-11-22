#include<stdio.h>

int main(){
	
	for(int i = 65; i <= 122; i++){
		if(i == 91)
			i = 97;
		printf("%c - %d\n",i,i);
	}	
	
	return 0;
}
