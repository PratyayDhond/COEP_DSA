#include<stdio.h>
#include "stack.h"

int main(){
    Stack s;
    char str[] = "racecar";    
    int size = sizeof(str)/ sizeof(str[0]);

    printStringAndItsReverse(str, size);
    printf("%s %s",str,isPalindrome(str,size) ? "Is Palindrome" : " Is Not Palindrome!");
}