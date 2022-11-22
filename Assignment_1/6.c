/*
Write a C program to calculate area and circumference of circle using variables and constant
*/

#include<stdio.h>

int main(){
    const float PI = 22/7.0;
    float radius;

    printf("Enter radius of circle: ");
    scanf("%f",&radius);

    printf("Area of circle : %.2f\n", PI * radius * radius );
    printf("circumference of circle : %.2f\n", 2 * PI * radius );
}