#include<stdio.h>
#define true 1
#define false 0

int isPalindrome(int n){
    int temp = n;
    int reverse = 0;
    while(temp != 0){
        reverse = reverse*10 + temp % 10;
        temp = temp / 10;
    }

    return reverse == n ? true : false;
}

int main(){
    int n;
    scanf("%d",&n);

    printf("The number %d is %s",n,isPalindrome(n) == true ? "Palindrome" : "not a Palindrome");
    return 0;
}