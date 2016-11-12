#include <stdio.h>
#include "lista.h"

int main (){
	Game jogo1, jogo2, jogo3;
	jogo1.ano = 15;
	jogo2.ano = 10;
	jogo3.ano = 5;
	No *n;

	n = create();
	n = push(n, jogo1);
	n = push(n, jogo2);
	n = push(n, jogo3);
	show(n);
	remov(n, 10);
	show(n);
	return 0;
}
