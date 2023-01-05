#define true 1
#define false 0

typedef struct Node{
	int i,j,data;
	struct Node* next;
	struct Node* down;
}Node;

typedef struct Sparse{
	int noOfRows;
	int noOfColumns;
	Node ** rows;
	Node ** columns;
}Sparse;

void initSparse(Sparse *s,char*);
void display(Sparse s);
void displayWithoutIndexes(Sparse s);
Sparse add(Sparse s1, Sparse s2);
Sparse subtract(Sparse s1, Sparse s2);
int checkSymmetric(Sparse s);
void transpose(Sparse *s);