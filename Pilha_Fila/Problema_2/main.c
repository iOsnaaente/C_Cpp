#include <stdio.h>

int main(){

	char c [6] = "Teste" ;
	char d = c [ 2 ];
	char *e = c+2;
	char **f = &e ;

	c [2] = 'S';

	printf ("%s\n", c );
	printf (" %c\n", d );
	printf ("  %s\n", (e));
	printf ("   %s\n", *f );

	exc2();

	return 0;
}

//1. Este c�odigo gera algum erro de compila�c�ao? Em qual linha? Explique.
	//Sim ele gera um erro de compila��o na linha 14, uma vez que o char *e � igual a c+2 (01~23456~)
	//e no print ele pede para imprimir algo que vai al�m do que o ponteiro aponta que seria o c-2
	// estaria fora do dominio do ponteiro.

//2. Ao declarar a vari�avel c, quanto espac�o �e alocado em mem�oria?
    // 1 byte por char, como c � uma stringg (vetor de char) seriam [6]xTamanho de char;
	// 1 byte x 6 char = 6 bytes;

 void exc2(){

	char c[6];
	printf("Tamanho da lista = %d \n\n", sizeof(c));

	printf("\nProvando isso em pr�tica\n\n");

	int i;
	for (i=0; i<6;i++){
		printf("Tamanho do elemento %d da lista = %d \n",i, sizeof(c[i]));
	 }

	printf("\n\nDiferen�a do maior com o menor elemento da lista = %d ", &c[6]-&c[0]);
 }


//3. Exatamente o qu�e �e impresso nas linhas 12, 13, 14 e 15?
	// 12 imprime TeSte
	// 13 imprime S
	// 14 imprime Ste
	// 15 imprime o que esta contido em 14 Ste

//4. Qual �e tipo de vari�avel e o valor contido respectivamente em **f, *f, f e &f.
	//Ponteiro que aponta para outro ponteiro
	//Ponteiro de algo
	//Algo
	//Endere�o de algo


//5. Entre as vari�aveis c, d, e e f, quais destas s�ao endere�cos? Quanto espa�co cada uma delas ocupa em mem�oria? Explique.
	// C � uma lista de char - Ocupa o numero de elemntos da lista x tamanho de bytes de char que � 1
	// D � um elemento char da lista de C -  Ocupa 1 Byte ~~Tamanho de 1 char
	// E � um ponteiro da lista de char - � um endere�o ~~ Endere�o ocupa sempre 4bytes
	// F � um ponteiro que aponta para E que � um ponteiro tamb�m, logo, tamb�m � um endere�o  ~~ Endere�o ocupa sempre 4bytes
