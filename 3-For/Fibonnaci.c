#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ENTRADA DE DADOS: UM NUMERO N
    //SA�DA DE DADOS: A SEQU�NCIA DE FIBONNACI


    printf("\nDigite um n�mero [n] qualquer:\n");
    int n;
    printf("\n[n]="); scanf("%i", &n);
    printf("\nO valor de [n] �: %i", n);

    printf("\n\n");

    //SEQU�NCIA DE FIBONNACI �:
    //FIB DE ZERO � 0
    //FIB DE UM � 1

    //FIB DE DOIS � 1 1+0
    //FIB DE TR�S � 2 1+0+1
    //FIB DE QUATRO � 4 1+0+1+1+0
    //FIB DE CINCO � 5 1+0+1+1+0+1+0+1
    //FIB DE SEIS � 8  1+0+1+1+0+1+0+1+1+0+1+1+0
    //FIB DE SETE � 13 1+0+1+1+0+1+0+1+1+0+1+1+0+1+0+1+1+0+1+0+1

    //FIBONNACI � FIBN = FIBN-2 + FIBN-1
    // N = 11 FIB DE 11 � FIB DE 9 + FIB DE 10

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
