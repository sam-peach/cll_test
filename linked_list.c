#include "linked_list.h"

List *new_list() {
  List *list = malloc(sizeof(List));
  list->size = 0;

  return list;
}

void list_add(List *list, void *data) {
  Node *n = malloc(sizeof(Node));
  n->data = data;

  if (list->size == 0) {
    list->head = n;
    list->tail = n;
  } else {
    list->tail->next = n;
    list->tail = n;
  }

  list->size++;
}

void *list_pop(List *list) {
  if (list->size == 0) {
    return NULL;
  }

  Node *tail = list->tail;
}

void print_list(List *list) {
  Node *curr = list->head;
  for (int i = 0; i < list->size; i++) {
    printf(">>> %i\n", curr->data);
    curr = curr->next;
  }
}