#include<ctype.h>
#include<stdio.h>
#include "stack.h"
#include<limits.h>

double postfixEvaluation(char* expression){
    Stack s;
    int size = 1;
    int i = 0;
    while(expression[i++] != '\0')
        size++;
    i = 0;
    initStack(&s,size);
    double num1,num2;
    double res = 0.0;
    while(expression[i] != '\0'){
        if(isdigit(expression[i])){
            num1 = expression[i] -'0';
            push(&s,num1);
        }else{
            num1 = pop(&s);
            num2 = pop(&s);
            if((int)num1 == INT_MIN || (int)num2 == INT_MIN){
                printf("Invalid Expression detected. Returning with Error[More operators than operands]\n");
                return INT_MIN;
            }
            switch (expression[i])
            {
            case '+': 
                    res = num1 + num2;
                    break;
            case '-':
                    res = num1 - num2;                    
                    break;
            case '*':
                    res = num1 * num2;
                    break;
            case '/':
                    res = num1 / num2;                    
                    break;
            default:
                printf("Error! Invalid operator detected {%c} Exitting function..\n",expression[i]);
                return INT_MIN;
            }
            push(&s,res);
        }
        i++;
    }
    double result = pop(&s);
    if(isEmpty(s))
        return result;
    else{
        printf("Error! Less operators than operand detected. Exitting function.");
        return INT_MIN;
    }
}
