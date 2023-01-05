#include<stdio.h>
#include "sparse.h"

int main(){
	Sparse s1,s2,s3,s4,s5,s6;
	initSparse(&s1, "sparseInput.txt");
	initSparse(&s2, "sparseInput2.txt");
	s3 = add(s1,s2);
	s4 = subtract(s1,s2);

	initSparse(&s5, "symmetricMatrix.txt");
	initSparse(&s6, "symmetric1.txt");

	s3 = transpose(s3);
	display(s3);
	int result = checkSymmetric(s2);
	// printf("Matrix S1 is%sSymmetric.\n",(checkSymmetric(s1) ? " " : " not "));
	// printf("Matrix S2 is%sSymmetric.\n",(checkSymmetric(s2) ? " " : " not "));
	// printf("Matrix S5 is%sSymmetric.\n",(checkSymmetric(s5) ? " " : " not "));
	// printf("Matrix S6 is%sSymmetric.\n",(checkSymmetric(s6) ? " " : " not "));
}
