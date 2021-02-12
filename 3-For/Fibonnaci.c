#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ENTRADA DE DADOS: UM NUMERO N
    //SAÍDA DE DADOS: A SEQUÊNCIA DE FIBONNACI


    printf("\nDigite um número [n] qualquer:\n");
    int n;
    printf("\n[n]="); scanf("%i", &n);
    printf("\nO valor de [n] é: %i", n);

    printf("\n\n");

    //SEQUÊNCIA DE FIBONNACI É:
    //FIB DE ZERO É 0
    //FIB DE UM É 1

    //FIB DE DOIS É 1 1+0
    //FIB DE TRÊS É 2 1+0+1
    //FIB DE QUATRO É 4 1+0+1+1+0
    //FIB DE CINCO É 5 1+0+1+1+0+1+0+1
    //FIB DE SEIS É 8  1+0+1+1+0+1+0+1+1+0+1+1+0
    //FIB DE SETE É 13 1+0+1+1+0+1+0+1+1+0+1+1+0+1+0+1+1+0+1+0+1

    //FIBONNACI É FIBN = FIBN-2 + FIBN-1
    // N = 11 FIB DE 11 É FIB DE 9 + FIB DE 10

	int CTRL =0;
	int soma, n1, n0;

	n1 = 1;
	n0 = 0;

		for (CTRL=0;CTRL<=n; CTRL++ )
			{

				soma = n0+ n1;
				n0=n1;
				n1 = soma;

				printf("%i\n", soma);
		}





    return 0;
}
