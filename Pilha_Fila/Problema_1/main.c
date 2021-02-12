#include <stdio.h>
#include <stdlib.h>

int main(void){

	char *c;
	printf ("%d \n " , c );

	//EXECUÇÃO, PARA VISUALIZAR APENAS APAGUE AS BARRAS DUPLAS E EXECUTE;

	//exemplo_1();
	//exemplo_2();
	//exemplo_3();
	//exemplo_4();
	//exemplo_5e6();

	return 0;
}


//1. Qual ´e o tipo da vari´avel c?

	//A variavel C é do tipo ponteiro de char, aponta para um endereço de memória qualquer e tem como variavel char, exemplo:

void exemplo_1(){

	char *c;
	int exemplo;

	c = &exemplo;

	exemplo = 12;

	printf("\n\n%d\n\n", *c);  // IMPRIME 12

}

//2. Há espaço alocado para uma string de caracteres? Explique?
	// SIM, pois uma string nada mais é do que um vetor de char -> Char nome[30];
	// no caso a cima, nome é um vetor de 31 espaços ocupados por char que formam uma string, cada char ocupa 1 bytes, logo, 31 chars ocupam 31 bytes:

void exemplo_2(){

	char *nome = "\n\nFulano de Beltrano com Ciclana";


	printf("%s \n", nome);

	printf("\n\nvejamos os endereços de memória;\n");

	int i;
	for (i=0;i<30;i++){
		printf("%c, %d \n", nome[i], &nome[i]);
	}

	printf("\n\nSe fizer o nome[30] com nome[0] teremos o número de memória ocupado;\n");

	printf("%d \n\n", &nome[30] - &nome[0]);

}

//3. A vari´avel c ocupa espac¸o em mem´oria? Se sim, como descobrir quanto espa¸co a vari´avel c ocupa em mem´oria?

	// SIM ela ocupa espaço, para descobrir o tamanho basta usar um sizeof da variavel c
	// o curioso é que o ponteiro (mesmo que de char ou double) ocupa 4 byts de espaço
	// char = 1 byte / double = 8 bytes / ponteiro = 4 bytes / inteiro = 4 bytes
	// Mesmo que o ponteiro seja um long double tera 4 bytes enquanto o long double deveria ter 12 bytes

void exemplo_3(){

	char a;
	int b;
	double c;

	char *A;
	int *B;
	double *C;

	printf("char %d\n", sizeof(a));
	printf("int %d\n", sizeof(b));
	printf("double %d\n", sizeof(c));

	printf("ponteiro char %d\n", sizeof(A));
	printf("ponteiro int %d\n", sizeof(B));
	printf("ponteiro double %d\n", sizeof(C));

	long double d;
	long double *D;

	printf("long double %d\n", sizeof(d));
	printf("pont long double %d\n", sizeof(D));

}

//4. Como descobrir o endere¸co da vari´avel c?
	//basta dar um print da variavel c com o & antes da declaração;
	//se quisermos descobrir o endereço de onde a variavel aponta, tempos que colocar a declaração *c depois do &;


void exemplo_4(){

	char *c;
	printf("\nEndereço do ponteiro c = %d", &c);


	int a;

	printf("\n\nEndereço da variavel a = %d",&a);

	c=&a;

	printf("\n\nEndereço de c = %d  endereço do valor apontado por c = %d", &c,&(*c)) ;

	printf("\n\nNote que o valor apontado por c é o mesmo valor da variavel a, mas que o valor do endereço do ponteiro não\n\n");

}

//5. Na func¸˜ao printf da linha 7 que tipo de vari´avel est´a sendo passado no segundo argumento? Vocˆe encontra algum erro?
//6. H´a como se saber qual conteu´do vai ser impresso na tela? Por quˆe?

void exemplo_5e6(){

	char *c, *d, *e;

	printf("%d \n", c);
	printf("%d \n", d);
	printf("%d \n", e);

	printf("\n\nSão impressos valores aleatórios, já que o ponteiro não tem um endereço específico para apontar, mas possui um endereço destinado à ele, que pode estar ocupado com lixo de outras aplicações\n\n");
	printf("Desta forma, não temos como saber qual sera o endereço que sera destinado para ele e nem como descobrir o que tera dentro desse endereço\n\n");

}

