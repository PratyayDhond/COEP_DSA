#define true 1
#define false 0

typedef struct Stack{
    int top;
    int size;
    char *arr;
}Stack;

char pop(Stack *stack);
void push(Stack *stack, char value);
int isEmpty(Stack stack);
int isFull(Stack stack);
void printStringAndItsReverse(char* str, int size);
int isPalindrome(char* str, int size);
void initStack(Stack *s, int size, char* str);