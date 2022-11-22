#include<stdio.h>

int main(){
  int n;
  int sum = 0;
  printf("Enter the nth term: ");
  scanf("%d",&n);
  
  int temp = n;
  
  while(temp){
  	sum += temp--;
  }
  
  
  
  printf("The sum of the first %d natural numbers is: %d\n",n,sum);
}
