typedef struct Node{
    int PRN;
    char * name;
    struct Node* next;      
} Node;

typedef Node* List;

void display(List l1);

int addMemberToList(List *l1, char* name, int PRN);
void addPresident(List *l1, char *name, int PRN);
void addSecretary(List *l1,char *name, int PRN);

void deletePresident(List *l1);
void deleteSecretary(List *l1);
void deleteMember(List *l1, int PRN);

void initList(List *l1);
int totalMembers(List l1);