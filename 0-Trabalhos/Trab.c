#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 1 Encontre o quadrado perfeito mais próximo de n. Este valor deve, obrigatoriamente, ser menor do que n.
    // 2 Escolha a raiz quadrada do número escolhido no passo 1. Chame este número de   q.
    // 3 Divida n por q.
    // 4 Some o resultado do passo 3 com o resultado do passo 2.
    // 5 Divida o resultado do passo 4 por 2. Este será o valor de q na repetição.
    // 6 Repita os passos 3 até 5 para uma estimativa melhorada.

//PASSO 1;

    float RAIZ; //RAIZ = RESULTADO FINAL

    printf("Digite um numero maior que 0 (zero) e menor ou igual a 200:");
    float n; //NÚMERO PARA DESCOBRIR A RAIZ
    scanf("%f", &n);

    puts("\n "); //QUEBRA DE LINHA

//PASSO 2;

//DESCOBRIR O VALOR DE q PERCORRENDO AS RAIZES PERFEITAS;
//RAIZES PERFEITAS [1 ATÉ 14] - 1 4 9 16 25 36 49 64 81 100 121 144  169 196

float q;
if(n>0 && n==1){q=1;} else if (n>1 && n<=4){q=2;} else
if(n>4 && n<=9){q=3;} else if (n>9 && n<=16){q=4;} else
if(n>16 && n<=25){q=5;} else if (n>25 && n<=36){q=6;} else
if(n>36 && n<=49){q=7;} else if (n>49 && n<=64){q=8;} else
if(n>64 && n<=81){q=9;} else if (n>81 && n<=100){q=10;} else
if(n>100 && n<=121){q=11;} else if (n>121 && n<=144){q=12;} else
if(n>144 && n<=169){q=13;} else if (n>169 && n<=196){q=14;}else
if (n>196 && n<= 200){q=14;} else if (n<=0 || n>200) {q=0;}


//PASSO 3 -  DIVIDIR N POR Q
 float divisao = n /q ;

//PASSO 4 - SOMAR O RESULTADO 3 COM O Q
float soma = divisao + q ;

//PASSO 5 - DIVIDIR POR 2
float novoQ = soma /2;

//PASSO 6 - REPETIR

float divisao2 = n/novoQ;
float soma2 = divisao2 + novoQ;
RAIZ = soma2 /2;

//RESULTADOS
printf("O numero escolhido foi: %2.f", n);

if (q>0){
		printf("\nA raiz de %.2f e: %.2f", n, RAIZ );}
			else {printf("\nNúmero inválido");}


    puts("\n "); //QUEBRA DE LINHA

    return 0;
}
