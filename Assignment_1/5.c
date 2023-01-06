/*
Write a C program to display a day (Monday or Tuesday or Wednesday etc.) when a number
(1 or 2 or 3 etc.) of a week is entered. Assume that first day of the week is Monday.
*/

#include<stdio.h>

int main(){
    int dayNumber;
    printf("Enter Day Number: ");
    scanf("%d",&dayNumber);

    switch(dayNumber){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Error! The days are in a range of 1-7");
            break;
    }
    printf("\n");
}