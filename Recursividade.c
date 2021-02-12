/*Fa�a um programa que leia um n�mero inteiro positivo N. Crie uma fun��o recursiva que receba o
n�mero N lido e calcule o RETORNO o somat�rio dos n�meros PARES de 1 a N.
No programa principal, chame a fun��o criada e passe N como par�metro, e ap�s mostre o resultado
da fun��o. N�o precisa usar os #include*/


#include <stdio.h>
#include <stdlib.h>


int fun_soma_pares ( int N ){

    if ( N == 0){
        return 0;
    }
    else if ( N % 2 == 0 ) {
        return N + fun_soma_pares(N-1);
    }
    else{
        fun_soma_pares(N-1);
    }
} 


int main(){

    int N;

    printf("Digite um numero inteiro positivo: ");
    //scanf("%d", &N);
    N = 6; 
    
    int soma = fun_soma_pares( N );


    printf("\nsoma = %d", soma);

    return 0;
}
