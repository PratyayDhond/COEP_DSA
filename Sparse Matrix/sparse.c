#include<stdio.h>
#include<stdlib.h>
#include "sparse.h"

void display(Sparse s){
	Node * p;
	for(int i = 0; i < s.noOfRows; i++){
	    p = s.rows[i];
	    while(p){
	    	printf("%d %d %d\n",p->i, p->j, p->data);
	    	p = p-> next;
	    }
	}
}


void initSparseWithoutFileInput(Sparse *s){
	s->rows = (Node **) malloc(sizeof(Node*) * s->noOfRows);
	s->columns = (Node **) malloc(sizeof(Node*) * s->noOfColumns);
	
	for(int i = 0; i < s->noOfRows; i++)
		s->rows[i] = NULL;	
		
	for(int i = 0; i < s->noOfColumns; i++)
		s->columns[i] = NULL;
	return;	
}

void createNewNodeAndAddToOrthagonalMatrix(Sparse *s,int i, int j, int value){
	Node* nn = (Node *) malloc(sizeof(Node));
	if(!nn)
		return ;
		
	nn -> next = NULL;
	nn -> down = NULL;
	nn -> data = value;
	nn -> i = i;
	nn -> j = j;
	
	Node *p;	
	if(s->rows[i] == NULL){
	    s->rows[i] = nn;
	}else if(s->rows[i]-> next == NULL){
	    s->rows[i] -> next = nn;
	}else{
	   p = s-> rows[i];
	   while(p->next){
	   	p = p-> next;
	   } 
	   p -> next = nn;
	}
	
	 if(s -> columns[j] == NULL)
		s->columns[j] = nn;
	else{
	   p = s -> columns[j];
	   while(p -> down){
	   	p = p -> down;
	   }
	   p -> down = nn;
	}

}
	


Sparse add(Sparse s1, Sparse s2){
	Sparse s3;
	s3.noOfRows = s1.noOfRows > s2.noOfRows ? s1.noOfRows : s2.noOfRows;
	s3.noOfColumns = s1.noOfColumns > s2.noOfColumns ? s1.noOfColumns : s2.noOfColumns;
	
	if(s1.noOfRows != s2.noOfRows && s1.noOfColumns != s2.noOfColumns)
		return s3;

	initSparseWithoutFileInput(&s3);
	
	Node *p, *p2;
	int sum;  
	for(int i = 0; i < s3.noOfRows; i++){
		sum = 0;
	    p = s1.rows[i];
		p2 = s2.rows[i];

	    while(p && p2){
			if(p -> j == p2 -> j ){	
				createNewNodeAndAddToOrthagonalMatrix(&s3, i,p->j, p->data + p2->data);
				p = p -> next;
				p2 = p2 -> next;
			}else if(p -> j < p2 -> j){
				createNewNodeAndAddToOrthagonalMatrix(&s3, i, p-> j, p -> data );
				p = p -> next;
			}else{
				createNewNodeAndAddToOrthagonalMatrix(&s3, i, p2-> j, p2 -> data );
				p2 = p2 -> next;
			}
	    }

		while(p){
			createNewNodeAndAddToOrthagonalMatrix(&s3, i, p->j, p->data);
			p = p->next;
		}

		while(p2){
			createNewNodeAndAddToOrthagonalMatrix(&s3, i, p2->j, p2->data);
			p2 = p2->next;
		}
	}

	return s3;
}


Sparse subtract(Sparse s1, Sparse s2){
	Sparse s3;
	s3.noOfRows = s1.noOfRows > s2.noOfRows ? s1.noOfRows : s2.noOfRows;
	s3.noOfColumns = s1.noOfColumns > s2.noOfColumns ? s1.noOfColumns : s2.noOfColumns;
	
	if(s1.noOfRows != s2.noOfRows && s1.noOfColumns != s2.noOfColumns)
		return s3;

	initSparseWithoutFileInput(&s3);
	
	Node *p, *p2;
	int sum;  
	for(int i = 0; i < s3.noOfRows; i++){
		sum = 0;
	    p = s1.rows[i];
		p2 = s2.rows[i];

	    while(p && p2){
			if(p -> j == p2 -> j ){	
				if(p->data - p2->data != 0)
					createNewNodeAndAddToOrthagonalMatrix(&s3, i,p->j, p->data - p2->data);
				p = p -> next;
				p2 = p2 -> next;
			}else if(p -> j < p2 -> j){
				createNewNodeAndAddToOrthagonalMatrix(&s3, i, p-> j, p -> data );
				p = p -> next;
			}else{
				createNewNodeAndAddToOrthagonalMatrix(&s3, i, p2-> j, - p2 -> data );
				p2 = p2 -> next;
			}
	    }

		while(p){
			createNewNodeAndAddToOrthagonalMatrix(&s3, i, p->j, p->data);
			p = p->next;
		}

		while(p2){
			createNewNodeAndAddToOrthagonalMatrix(&s3, i, p2->j, - p2->data);
			p2 = p2->next;
		}
	}

	return s3;
}


void initSparse(Sparse* s, char* str){
	
	FILE *fptr;
	fptr = fopen(str,"r");

	// fptr = fopen("sparseInput.txt","r");
	fscanf(fptr,"%d %d", &s->noOfRows , &s->noOfColumns);
//	printf("%d %d", s->noOfRows, s->noOfColumns);
	
	s->rows = (Node **) malloc(sizeof(Node*) * s->noOfRows);
	s->columns = (Node **) malloc(sizeof(Node*) * s->noOfColumns);
	
	for(int i = 0; i < s->noOfRows; i++)
		s->rows[i] = NULL;	
		
	for(int i = 0; i < s->noOfColumns; i++)
		s->columns[i] = NULL;
		
	int temp;
	for(int i = 0; i < s->noOfRows; i++){
	   	for(int j = 0; j < s->noOfColumns; j++){	
	   		fscanf(fptr,"%d",&temp);
	   		if(temp != 0){
	   		  createNewNodeAndAddToOrthagonalMatrix(s,i,j,temp);
	   		}
	   	}
	}	
	
	
}

int hasSymmetricPair(Sparse s,int i, int j, int data){
	Node *col = s.columns[j];

	while(col && col->i <=j && col->j<=i){
		if(col->i == j && col->j == i)
			if(data == col->data)
				return true;
		col = col->down;
	}
	return false;
}

int checkSymmetric(Sparse s){
	printf("YO1\n");
	if(s.noOfColumns == 0 || s.noOfRows == 0)
		return false;
	printf("YO2\n");
	if(s.noOfRows != s.noOfColumns)
		return false;
	printf("YO3\n");
	
	Node *col, *row;
	int result = true;
	for(int i = 0; i < s.noOfRows; i++){
		row = s.rows[i];
		while(row){
			printf("YO%d\n",4+i);
			result = hasSymmetricPair(s,i,row->j, row->data); 
			if(!result)
				return result;
			row = row -> next;
		}
	}
	return true;
}