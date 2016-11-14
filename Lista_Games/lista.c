#include "lista.h"
#include <stdlib.h>
No *create(){
    return NULL;
}
No *push(No *l, Game g){
    No * aux = (No *) malloc (sizeof(No));
    aux->game = g;
    aux->next = l;
}
No *remov(No *l, int ano){
    No *aux, *prev=NULL;
    for(aux=l; aux!=NULL; aux=aux->next){
        if(aux->game.ano == ano){
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

void show(No *l){
    No *aux;
    for(aux=l; aux!=NULL; aux=aux->next)
        printf("%d ", aux->game.ano);
    printf("\n");
}
