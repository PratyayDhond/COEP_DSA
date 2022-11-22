/*Write a C program to find out the size of variables of different data types (use
sizeof() operator) and display their size in output*/

#include<stdio.h>

int main(){
    int number = 100;
    float percentage = 99.55;
    double PI = 22/7.0;
    long int longNumber = 24566765;
    long long int longLongNumber = 678567967;
    char initial = 'D';
    char * pointer = &initial;



    printf("Integer = %d \n",sizeof(number));
    printf("Float = %d \n",sizeof(percentage));
    printf("Double = %d \n",sizeof(PI));
    printf("long int = %d \n",sizeof(longLongNumber));
    printf("Character = %d \n",sizeof(initial));
    printf("pointer = %d \n",sizeof(pointer));
}
