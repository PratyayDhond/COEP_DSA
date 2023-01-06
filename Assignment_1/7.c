/*
Write a C program to perform different unit conversion (Fahrenite to Celsius)
*/

#include<stdio.h>

int main(){
    float farhenite;
    int celsius;

    printf("Enter temerature in fahrenite: ");
    scanf("%d", &celsius);
    farhenite = (celsius - 32) * 5/9.0;

    printf("Temperature in celsius: %.2f", farhenite);
}