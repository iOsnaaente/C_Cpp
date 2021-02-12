#include <stdio.h>
#include <stdlib.h>

int *stackood;
int order=1;

void push(n){

	stackood[order]=n;
	order++;
	realloc(stackood, order);
}

int pop(){

	if (order!=1){

		order--;
		realloc(stackood, order);

		return *(stackood+order);;

	}else{	printf("\n~ERRO _ STACK NULL _____");
			return -1;
	}
}
