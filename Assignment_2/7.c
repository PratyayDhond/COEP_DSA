#include<stdio.h>
#include<stdlib.h>

int find_gcd(int smallerNumber, int greaterNumber){
	int gcd = 1;
	
	for(int i = 2; i <= smallerNumber; i++){
		if(smallerNumber % i == 0 && greaterNumber %i == 0)
			gcd = i;
	}
	
	return gcd;
}

int find_lcm(int smallerNumber, int greaterNumber){
	int lcm = 0;
	int smallerNumberMultiple = smallerNumber;
	int greaterNumberMultiple = greaterNumber;
	
	while(smallerNumberMultiple != greaterNumberMultiple){
		if(smallerNumberMultiple < greaterNumberMultiple){
			smallerNumberMultiple += smallerNumber;
		}else{
			greaterNumberMultiple += greaterNumber;
		}
	}
	
	lcm = smallerNumberMultiple;
	return lcm;
	//	Example: 2,3
	//	2, 4, 6, 8, 10
	//  3, 6, 9, 12
	
	
	
}

int main(int argc, char* argv[]){
	
	int first_number = atoi(argv[1]);
	int second_number = atoi(argv[2]);
	
	int gcd = 0;
	int lcm = 0;
	
	if(first_number > second_number){
		gcd = find_gcd(second_number, first_number);
		lcm = find_lcm(second_number, first_number);
	}else{
		gcd = find_gcd(first_number, second_number);
		lcm = find_lcm(first_number, second_number);
	}
	
	printf("Greatest Common Divisor : %d\n",gcd);
	printf("Least Common Multiple : %d\n",lcm);

	return 0;
}



