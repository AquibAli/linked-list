#ifndef LINKED_LIST
#define LINKED_LIST

struct node * createList(int size);
void traverse(struct node *head);
struct node * insertNodeAtBeginning(struct node *head, int n);
void insertNodeAtEnd(struct node *head, int m);
struct node * deleteNodeAtBeginning(struct node *head);
struct node * deleteNodeAtEnd(struct node *head);

#endif
