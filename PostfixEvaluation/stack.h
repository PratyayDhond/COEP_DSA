#define true 1
#define false 0

typedef struct Stack{
    int top;
    int size;
    float *arr;
}Stack;

float pop(Stack *stack);
void push(Stack *stack, float value);
int isEmpty(Stack stack);
int isFull(Stack stack);
void initStack(Stack *s, int size);