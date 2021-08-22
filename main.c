#include <stdio.h>
#include "linkedList.h"

int main(){

  int size, n, m;
  printf("Enter the size of list\n");
  scanf("%d", &size);

  // Creating the linked list of given size
  struct node *head = createList(size);
  printf("Original Linked list\n");
  traverse(head);

  printf("Enter the number to be inserted at beginning of the list\n");
  scanf("%d", &n);

  // Inserting the node at the beginning in the linked list
  head = insertNodeAtBeginning(head, n);
  printf("Linked list after inserting the element in the beginning\n");
  traverse(head);

  printf("Enter the number to be inserted at end of the list\n");
  scanf("%d", &m);

  // Inserting the node at the end in the linked list
  insertNodeAtEnd(head, m);
  printf("Linked list after inserting the element at the end\n");
  traverse(head);

  // Deleting the node present at the beginning of the linked list
  head = deleteNodeAtBeginning(head);
  printf("Linked list after deleting the element from the beginning\n");
  traverse(head);

  // Deleting the node present at the end of the linked list
  head = deleteNodeAtEnd(head);
  printf("Linked list after deleting the element from the end\n");
  traverse(head);

  return 0;
}
