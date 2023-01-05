#include<stdio.h>
#include "sparse.h"

int main(){
	Sparse s1,s2,s3,s4,s5,s6,transpose1;
	initSparse(&s1, "sparseInput.txt");
	initSparse(&s2, "sparseInput2.txt");
	s3 = add(s1,s2);
	s4 = subtract(s1,s2);

	initSparse(&s5, "symmetricMatrix.txt");
	initSparse(&s6, "symmetric1.txt");

	initSparse(&transpose1,"transposeInput.txt");
	displayWithoutIndexes(transpose1);
	transpose(&transpose1);
	printf("\n");
	displayWithoutIndexes(transpose1);
	int result = checkSymmetric(s2);
	printf("%s\n",checkSymmetric(s1) ? "Symmetric" : "Not Symmetric" );
	printf("%s\n",checkSymmetric(s5) ? "Symmetric" : "Not Symmetric" );
	printf("%s\n",checkSymmetric(s6) ? "Symmetric" : "Not Symmetric" );

}
