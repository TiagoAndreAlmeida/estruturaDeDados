#include <stdio.h>

typedef struct game {
	int ano;
}Game;

struct no {
	Game game;
	struct no *next;
};
typedef struct no No;

No *create();
No *push(No *l, Game g);
No *remov(No *l, int ano);
void show(No *l);
