#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct Pilha{
	char stack[MAX];
	char ordem;
};

void inicia_Pilha(struct Pilha *p){
	p->ordem=0;
	p->stack[p->ordem]=MAX+1;
}

void push(struct Pilha *p, char n){
	p->stack[p->ordem] = n;
	p->ordem++;
}

char pop(struct Pilha *p){

	if (p->ordem!=0){
		p->ordem--;
		return p->stack[p->ordem];

	}else{
		printf("STACK NULL~~~~\n");
		return 0;
	}
}

char topo_Pilha(struct Pilha *p){

	if (p->ordem!=0)	return p->stack[p->ordem-1];
	else				printf("STACK NULL~~");			return 0;

}

void ler_Pilha(struct Pilha *p){

	char i;
	for (i=0;i<10;i++){
		printf("%d ",p->stack[i]);
	}

	printf("\n");
}

void troca_valores(struct Pilha *p, struct Pilha *q){

	if (topo_Pilha(&p)>topo_Pilha(&q))	push(&q,pop(&p));
	else 								push(&p,pop(&q));

}



int main(){

	struct Pilha um,dois,tres;

	inicia_Pilha(&um);
	inicia_Pilha(&dois);
	inicia_Pilha(&tres);


	char i;
	for (i=0;i<10;i++){
		push(&um,i+1);
	}

	//while (tres.ordem<10){

		troca_valores(&um, &dois);
		troca_valores(&um, &tres);
		troca_valores(&tres, &dois);

		ler_Pilha(&um);

	//	ler_Pilha(&um);
	//	ler_Pilha(&dois);
	//	ler_Pilha(&tres);

    return 0;
}
