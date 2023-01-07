#include<stdio.h>
#include "postfix.h"

int main(){
    char expression[50];
    printf("Enter Your Expression : ");
        scanf("%[^\n]",&expression);
    double res = postfixEvaluation(expression);
    printf("%lf",res);
    return 0;
}