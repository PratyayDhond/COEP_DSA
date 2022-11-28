#include<stdio.h>

/*
	This code is coded for Source(A) Destination(C) Intermidiate(B)
	
	input = 3
	calling functoin -> tower_of_hanoi(n,'A','C','B');
	
	output:

		moved 1 from A to C
		moved 2 from A to B
		moved 1 from C to B
		moved 3 from A to C
		moved 1 from B to A
		moved 2 from B to C
		moved 1 from A to C
	
	output breakdown:
		   A			C			  	  B
		Source 		Destination 	Intermidiate
		  1
	Disks 2
		  3
		----------------------------------------
		  
	Disks 2				1		
		  3
		----------------------------------------
		  
	Disks 				1				2
		  3
		----------------------------------------
		  								1
	Disks 								2
		  3
		----------------------------------------
		  								1
	Disks 				3				2
		  
		----------------------------------------
		  1
	Disks 				3				2
		  
		----------------------------------------
		  1  			2
	Disks 				3				
		  
		----------------------------------------
		  				1				
	Disks 				2
		  				3
		----------------------------------------
		
*/

void tower_of_hanoi(int n, char source, char destination, char intermidiate){
	if(n == 1){
		printf("moved %d from %c to %c\n", n, source, destination);
		return;
	}
	if( n == 0)	 return;
	
	tower_of_hanoi(n-1, source, intermidiate, destination);
		printf("moved %d from %c to %c\n",n,source, destination);
	tower_of_hanoi(n-1, intermidiate, destination, source);
		// printf("moved %d from %c to %c\n",n,source, destination);
}

int main(){
	int n;
	printf("Enter Number of disks: ");
	scanf("%d",&n);
	
	tower_of_hanoi(n,'A','C','B');
	return 0;
}

