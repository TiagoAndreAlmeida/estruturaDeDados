#include <stdlib.h>
#include <stdio.h>
struct node {
    int value;
    struct node *next;
};
typedef struct node List;

List *create();
List *push(List *l, int value);
List *remov(List *l, int value);
void show(List *l);