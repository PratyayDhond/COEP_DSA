/*
2. Write a C program to find largest number among three numbers using ternary operator
*/

#include<stdio.h>

int main(){
    float number1, number2, number3;

    printf("Enter First Number: ");
    scanf("%f", &number1);

    printf("Enter First Number: ");
    scanf("%f", &number2);

    printf("Enter First Number: ");
    scanf("%f", &number3);

/*
    IF number1 is greater than number2
        IF number2 is greater than number3
            return number1
        ELSE 
            return number3
    ELSE
        IF number2 is greater than number3
            return number2
        ELSE
            return number3
*/

    float largest = number1 > number2 ?
                        number1 > number3 ?
                             number1:
                             number3:
                        number2 > number3 ?
                             number2: 
                             number3;
    printf("%f",largest);
    return 0;
}