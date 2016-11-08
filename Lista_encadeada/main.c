#include "lista.h"
#include <stdio.h>

int main (){
    List *l;
    l = create();
    l = push(l, 10);
    l = push(l, 15);
    l = push(l, 5);
    l = push(l, 8);
    l = push(l, 3);
    show(l);
    l = remov(l, 10);
    show(l);
    l = remov(l, 3);
    show(l);
    l = remov(l, 5);
    show(l);
    return 0;
}