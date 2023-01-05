#include<stdio.h>
#include "sparse.h"

int main(){
	Sparse s1,s2,sum,sub,s5,s6,transpose1;
	initSparse(&s1, "sparseInput.txt");
	initSparse(&s2, "sparseInput2.txt");
	sum = add(s1,s2);
	sub = subtract(s1,s2);

	initSparse(&s5, "symmetricMatrix.txt");
	initSparse(&s6, "symmetric1.txt");

	initSparse(&transpose1,"transposeInput.txt");
	printf("\n");
	displayWithoutIndexes(s1);
	int result = checkSymmetric(s2);
		printf("%s\n",checkSymmetric(s6) ? "Symmetric" : "Not Symmetric" );

}
