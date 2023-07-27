#include <stdio.h>
#include <stdlib.h>

typedef struct sNode {
  void *data;
  struct sNode *next;
} Node;

typedef struct sList {
  Node *head;
  Node *tail;
  int size;
} List;

// Create a new list
List *new_list();

// Add item to the list
void list_add(List *list, void *data);

void *list_pop(List *list);

void print_list(List *list);