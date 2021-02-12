#include <stdio.h>
#include <stdlib.h>


unsigned int i,j;

void troca_n1_n2(int *num1, int *num2){

	int aux = *num1;
	*num1 = *num2;
	*num2 = aux;

}

void *Boubble_sort(int *lista){

	i=0;
	while (lista[i]!='\0')	i++;

	int tam = i;
	for (i=0;i<tam;i++){
		for (j=1;j<tam-i;j++){
			if (lista[j]>lista[j+1])	troca_n1_n2(&lista[j], &lista[j+1]);
		}
	}
}


int main(){


	int lista[100];

	for (i=0;i<100;i++){
		lista[i] = rand()%100+1;
		printf("%d ", lista[i] );
	}

	Boubble_sort(&lista);

	printf("\n\n");

	for (i=0;i<100;i++){
		printf("%d ", lista[i]);
	}

return 0;
}

