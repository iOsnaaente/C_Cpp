#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int valor;
    struct nodo *dir;
    struct nodo *esq;
};

struct nodo *insere(int v, struct nodo *n){
    if (n == NULL){

        n = (struct nodo *)malloc(sizeof(struct nodo));
        n->valor = v;
        n->esq = NULL;
        n->dir = NULL;

    }else{
        if (v > n->valor)	n->dir = insere(v, n->dir);
        else        		n->esq = insere(v, n->esq);
    }

return n;
}

void Show_Cres( struct nodo *n){

	if (n != NULL){

		Show_Cres(n->esq);
		printf("%d\n", n->valor);
		Show_Cres(n->dir);

	}
}


int main(int argc, char *argv[])
{
    struct nodo *arv = NULL;
    arv = insere(100, arv);
    arv = insere(50, arv);
    arv = insere(25, arv);
    arv = insere(75, arv);
    arv = insere(150, arv);
    arv = insere(125, arv);
    arv = insere(175, arv);

    Show_Cres(arv);

    return 0;
}

