/* Write C program to check whether an alphabet entered by user is vowel or consonant 
    b. using switch statement
*/


#include<stdio.h>
#define true 1
#define false 0

int main(){

    char input;
    printf("Enter a character: ");
    scanf("%c",&input);

    if((int) input >= 65 && (int) input <= 90 || (int) input >= 97 && (int) input <= 122){
        
        switch(input){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':   
            case 'u':
            case 'U': 
                printf("The inputted character is a '%c' vowel",input);
                break;
            default:
                printf("The inputted character is a '%c' consonant",input);
                break;
        }
        
        printf("\n");
    }else{
        printf("Please input a valid character");
    }


}