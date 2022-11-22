/* Write C program to check whether an alphabet entered by user is vowel or consonant 
    a. using if else statement
*/

#include<stdio.h>
#define true 1
#define false 0

int main(){

    char input;
    printf("Enter a character: ");
    scanf("%c",&input);

    if((int) input >= 65 && (int) input <= 90 || (int) input >= 97 && (int) input <= 122){
        int bool = false;
        if(input == 'a' || input == 'A')
            bool = true;
        else if(input == 'e' || input == 'E')
            bool = true;
        else if(input == 'i' || input == 'I')
            bool = true;
        else if(input == 'o' || input == 'O')
            bool = true;
        else if(input == 'u' || input == 'U')
            bool = true;

        if(bool)
            printf("The inputted character '%c' is a vovel", input);
        else
            printf("The inputted character '%c' is a consonant", input);
        printf("\n");
    }else{
        printf("Please input a valid character");
    }

}