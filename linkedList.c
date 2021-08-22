#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{
  int data;
  struct node *link;
};

struct node * createList(int size){
  int i;
  struct node *head, *curr, *prev;
  srand(time(0));
  for(i = 0; i < size; i++){
      curr = (struct node *)malloc(sizeof(struct node));
      curr -> data = rand() % 100;
      curr -> link = NULL;
      if(i)
        prev -> link = curr;
      else
        head = curr;
      prev = curr;
  }
  return head;
}

void traverse(struct node *head){
  if(!head)
    printf("List is empty");
  struct node *temp = head;
  while(temp){
    printf("%d\t", temp -> data);
    temp = temp -> link;
  }
  printf("\n");
}

struct node * insertNodeAtBeginning(struct node *head, int n){
  struct node *start = (struct node *)malloc(sizeof(struct node));
  start -> data = n;
  start -> link = head;
  head = start;
  return head;
}

void insertNodeAtEnd(struct node *head, int m){
  struct node *end = (struct node *)malloc(sizeof(struct node));
  end -> data = m;
  end -> link = NULL;
  struct node *temp = head;
  while(temp -> link)
    temp = temp -> link;
  temp -> link = end;
}

struct node * deleteNodeAtBeginning(struct node *head){
  if(head == NULL)
    return NULL;
  if(head -> link == NULL){
    free(head);
    return head = NULL;
  }
  struct node *temp = head;
  head = head -> link;
  free(temp);
  return head;
}

struct node * deleteNodeAtEnd(struct node *head){
  if(head == NULL)
    return NULL;
  if(head -> link == NULL){
    free(head);
    return head = NULL;
  }
  struct node *temp = head;
  while(temp -> link -> link)
    temp = temp -> link;
  struct node *removedNode  = temp -> link;
  temp -> link = NULL;
  free(removedNode);
  return head;
}
