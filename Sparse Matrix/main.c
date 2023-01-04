#include<stdio.h>
#include "sparse.h"

int main(){
	Sparse s1,s2,s3,s4;
	initSparse(&s1, "sparseInput.txt");
	initSparse(&s2, "sparseInput2.txt");
	s3 = add(s1,s2);
	s4 = subtract(s1,s2);
	// display(s1);
	// printf("\n");
	// display(s2);
	// printf("\n");
	// display(s4);

	Sparse s5;
	initSparse(&s5, "symmetric1.txt");
	int result = checkSymmetric(s5);
	printf("Symmetric : %d",result);
}
