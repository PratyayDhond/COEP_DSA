typedef struct node{
    int data;
    struct node *next;
}node;

// provided to hide the data of node from the user
//i.e. to achieve abstraction
typedef node * List;

void append(List *l, int value);
void displayList(List l);
void initList(List *l);
void pushFront(List *l, int value);
void popBack(List *l);
void popFront(List *l);