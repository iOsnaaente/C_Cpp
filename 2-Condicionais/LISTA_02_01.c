#include <stdio.h>
#include <stdlib.h>


//~~~~~~~~BRUNO GABRIEL FLORES SAMPAIO~~~~~~~~//

int main()
{

//CONTROLE DE REPETIÇÕES
int CTRL = 1;


while (CTRL <=10){

	//SELEÇÃO DE ATIVIDADES

	int ATV;
	printf("\nSelecione a Atividade a ser executada: 10 Atividades disponíveis\n");

	scanf("%i", &ATV);


	//APRESENTAÇÃO DAS ATIVIDADES

	switch (ATV){
case 1:

	printf("\nATV 01 - ");

	printf("\n\nDigite 3 valores inteiros:\n");
	int A,B,C;

	printf("\nDigite o primiero valor [Valor A]:\n");
	scanf("%i",&A);
	printf("\nDigite o segundo valor[Valor B]:\n");
	scanf("%i",&B);
	printf("\nDigite o terceiro valor[Valor C]:\n");
	scanf("%i",&C);


	getch();

	if (A>B && A>C){
	printf("\nO valor [A] é maior que [B] e [C]:");
	} else if (B>A && B>C){
	printf("\nO valor [B] é maior que [A] e [C]:");
	}else if (C>B && C>A){
	printf("\nO valor [C] é maior que [A] e [B]:");
	}else if (A ==B || B==C || A==C){
	printf("\nExitem dois ou mais valores iguais:");
	}

	break;

case 2:
	printf("\nATV 02 - ");

	int X;
	printf("\nDigite um valor inteiro:\n");
	scanf("%i", &X);

	printf("\n\nO valor digitado é:\n");



	if ((X%2)==0){
		printf("\nPar:\n");

	}else if ((X%2)==1){
		printf("\nImpar:\n");
	}

		puts("\n");

		break;

case 3:
	printf("\nATV 03 - ");

	printf("\nDigite dois valores inteiros:\n");

	int UM, DOIS;
	printf("\nDigite o primeiro valor [1]:\n");
	scanf("%i", &UM);

	printf("\nDigite o segundo valor [2]:\n");
	scanf("%i", &DOIS);



	if(	(UM + DOIS) >20){
	printf("\nO valor [1] + o valor [2] é maior que 20:\nSomando mais 8 fica igual a:\n");
		printf( "%i ", (UM +DOIS) + 8);
	}
	if ((UM + DOIS)<=20 ){
		printf("\nO valor [1] + o valor [2], somados é inferior a 20:\nSubtraindo 5 ele fica igual a:\n");
		printf("%i ",(UM + DOIS) - 5);
	}
	break;

case 4:
	printf("\nATV 04 - ");

	int Ab, Bb;

	printf("\nDigite doi valores [A] e [B]:\n");
	puts("\nDigite o valor [A]:\n");
	scanf("%i", &Ab);
	puts("\nDigite o valor [B]:\n");
	scanf("%i", &Bb);

	getch();

	if ((Ab%Bb)==0){
		printf("\nO valor [A] é divisível por [B]:");
	}else { printf("\nO valor [A] não é divisível por [B]:");}


case 5:
	printf("\nATV 05 - ");

	printf("\nDigite três valores:\n[A]\n[B]\n[C]");

	float Aa, Be, Cc;

	printf("\nDigite o valor de [A]:");
	scanf("%f", &Aa);
	printf("\nDigite o valor de [B]:");
	scanf("%f", &Be);
	printf("\nDigite o valor de [C]:");
	scanf("%f", &Cc);

	printf("\nA ordem decrescente dos números é:\n");

	if (Aa > Be && Aa > Cc ){
		printf("[%2.f] ", Aa);

		if (Be>Cc){printf("[%2.f] [%2.f]", Be ,Cc);
		}else printf("[%2.f] [%2.f]", Cc ,Be);}


	if (Be > Aa && Be > Cc ){
		printf("[%2.f] ", Be);

		if (Aa>Cc){printf("[%2.f] [%2.f]", Aa ,Cc);
		}else printf("[%2.f] [%2.f]", Cc ,Aa);}

	if (Cc > Be && Cc > Aa ){
		printf("[%2.f] ", Cc);

		if (Be>Aa){printf("[%2.f] [%2.f]", Be ,Aa);
		}else printf("[%2.f] [%2.f]", Aa ,Be);}

		break;


case 6:
	printf("\nATV 06 - ");

	printf("\nDigite dois números inteiros [A] e [B]:");

	int Ai, Bi;

	printf("\nDigite o número [A]:");
	scanf("%i", &Ai);
	printf("\nDigite o número [A]:");
	scanf("%i", &Bi);

	printf("\n\nOs números selecionados foram: %i  %i  ", Ai, Bi);
	printf("\nDigite uma das opções de operações:\n\n[1]Média entre os números.\n[2]Diferença entre [A] e [B].\n[3]O produto de [A] por [B].");

	printf("\n\n"); //QUEBRA DE LINHA

	int selecao;
	scanf("%i", &selecao);

	if (selecao ==1){
		printf("\n\n[1]Média entre [A] e [B]:");
		printf("\n\nA média entre os números é: %i", Ai + Bi /2);
	}
	else if (selecao==2){
		printf("\n\n[2]A diferença entre os números:");
		printf("\n\nA diferença de [A] por [B] é: %i", Ai - Bi);
	}
	else if (selecao==3){

		printf("\n\n[3]O produto dos números:");
		printf("\n\nO produto dos números é: %i ", Ai * Bi);
		}
		else {
				printf("\nSeleção inválida.\n");
		}

break;

case 7:
	printf("\nATV 07 - ");

	printf("\nDirecionar a classe eleitora a partir da idade [Voto facultativo para maiores de 16 anos e menores de 18]");

	int idade;
	printf("\n\nDigite sua idade:\n");
	scanf("%i", &idade);

	if(idade <16){
		printf("\nMenores de 16 anos não possuem direito a voto.");
	}else if (idade >=16 && idade < 18 || idade > 65){
	printf("\nVoto facultativo.");
	} else if (idade >=18 && idade <= 65){
	printf("\nVoto obrigatório.");
	}
break;

case 8:
	printf("\nATV 08 - ");

	printf("\nInforme seu salário para reajuste:\n");
	float salario;
	printf("R$");scanf("%f", &salario);

	if (salario >=0 && salario <= 350){
		printf("\nO reajuste para salários inferiores a R$350,00 reais é de 35%:\nSalárioa atual = %2.f ", salario + salario * 0.35);
	}
	else if (salario > 350){
		printf("\nO reajuste para slários maiores que R$350,00 é de 15%:\nSalário atual = %2.f ", salario + salario * 0.15 );
	} else {
	printf("\nSalário inválido.");
	}
break;

case 9:
	printf("\nATV 09 - ");

	printf( "\nDigite três valores:");
	float lado1, lado2, lado3;
	scanf("%f", &lado1);
	scanf("%f", &lado2);
	scanf("%f", &lado3);

	printf("\n Os valores selecionados foram: %2.f %2.f %2.f", lado1, lado2, lado3);
	printf("\n\nVamos conferir se os valores são possíveis de valores dos lados de um triângulo, se sim, de qual tipo de triângulo.");

		if (lado1 > lado2 + lado3 || lado2 > lado1 + lado3 || lado3 > lado1 + lado2){
			printf("\nImpossível formar um triangulo com os valores.");
		}else if (lado1 == lado2 && lado2 == lado3){
		printf("\nÉ possível formar um triangulo EQUILÁTERO.");
		} else if (lado1 == lado2 || lado3 == lado2 || lado3 == lado1 ){
		printf("\nÉ possível formar um triangulo ISOCELES.");
		}else if (lado1 != lado2 && lado3 != lado2 && lado1 != lado3 ){
		printf("\nÉ possível formar um triangulo ESCALENO.");
		}
		}


++CTRL; //CONTROLE DE REPETIÇÕES
}
    return 0;
}
