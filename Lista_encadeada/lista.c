#include "lista.h"

List *create(){
    return NULL;
}
List *push(List *l, int value){
    List * aux = (List *) malloc (sizeof(List));
    aux->value = value;
    aux->next = l;
}
List *remov(List *l, int value){
    List *aux, *prev=NULL;
    for(aux=l; aux!=NULL; aux=aux->next){
        if(aux->value == value){
            if(prev==NULL){
                l=aux->next;
                free(aux);
                return l;
            }else if( (prev != NULL) && (aux->next != NULL) ){
                prev->next = aux->next;
                free(aux);
                return l;
            }else {
                prev->next = NULL;
                free(aux);
                return l;
            }
        }
        prev = aux;
    }
}
void show(List *l){
    List *aux;
    for(aux=l; aux!=NULL; aux=aux->next)
        printf("%d ", aux->value);
    printf("\n");
}