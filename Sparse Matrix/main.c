#include<stdio.h>
#include "sparse.h"

int main(){
	Sparse s1,s2,s3;
	initSparse(&s1, "sparseInput.txt");
	initSparse(&s2, "sparseInput2.txt");
	// display(s1);
	printf("\nDisplaying 2: \n");
	// display(s2);
	
	s3 = add(s1,s2);

}
