#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

//~~~~~~~~BRUNO GABRIEL FLORES SAMPAIO~~~~~~~~//

int main()
{

	printf("LISTA DE ATIVIDADES NUMERO 5 - VETORES E MATRIZES.\n");

	printf("ATV 01 - \n");

	int Vetor[20];
	int Pares =0;

	int i =0;
	int j =0;

	for (i=0; i<20; ++i){

		Vetor[i]= rand() % 10;

		printf("\nVetor Numero %i = %i ", i+1 , Vetor[i]);
		if (Vetor[i]%2==0){
			++Pares;
		}
	}

	printf("\nA quantidade de numeros pares no vetor é de: %i", Pares);



	printf("\nPara prosseguir, precione alguma tecla:");
	getch();
	printf("\n////////////////////////////////////////////////////////\n");


	printf("\nATV 02 - \n\n");

	i =0;
	j =0;

	int Matriz[3][3];

	printf("\nA Matriz é igual à:\n");

	for (i=0; i<3; ++i){
		for (j=0; j<3; ++j){

		Matriz[i][j] = rand()%100;

		printf(" ~ %i ~", Matriz[i][j]);


		}
		printf("\n");
	}

	printf("\n\nDigite um numero corresponte a uma das 3 linhas da matriz que deseja imprimir: \n[1]\n[2]\n[3]\n\n");

	int selec;
	scanf("%i", &selec);

	if (selec>=1 && selec<4 ){
	printf("\nA linha da matriz correspondente a %i é :\n~ %i ~ %i ~ %i ~", selec, Matriz[selec-1][0],Matriz[selec][1],Matriz[selec][2]);
	} else {printf("\nNumero de linha da matriz, inválido.");}


	printf("\nPara prosseguir, precione alguma tecla:\n");
	getch();
	printf("\n////////////////////////////////////////////////////////\n");


	printf("\nATV 03 - ");

	i = 0;
	j = 0;
	int Matriz2[3][5];
	int somaMatriz2=0;

	printf("\nA matriz é:\n");


	for (i=0; i<3; ++i){
		for (j=0; j<5; ++j){

		Matriz2[i][j]= rand()%50;

		if (Matriz2[i][j] >=15 && Matriz2[i][j] <=20 ){
			++somaMatriz2;
		}

		printf("- %i - ", Matriz2[i][j]);


		}
		printf("\n");
	}

	printf("\nO número de elementos entre 15 e 20 é de: %i", somaMatriz2);



	printf("\nPara prosseguir, precione alguma tecla:\n");
	getch();
	printf("\n////////////////////////////////////////////////////////\n");


	printf("\nATV 04 - ");

	printf("\nLer um vetor de 7 elementos e declarar qual a posição do menor número dentro do vetor:");
	printf("\nDigite os numeros do vetor:\n");

	int sete[7];
	i=0;
	int BancoDoSete;
	int aux;

	for (i=0; i<7; ++i){

		scanf("%i",&sete[i]);

		if (i==0){
		BancoDoSete == sete[i];
		}

		if (sete[i]<= BancoDoSete){
		BancoDoSete = sete[i];
		}
		printf("\nO número digitado é: %i\n", sete[i]);
	}


	printf("\nO menor numero é: %i", BancoDoSete);


	printf("\nPara prosseguir, precione alguma tecla:\n");
	getch();
	printf("\n////////////////////////////////////////////////////////\n");



	printf("\nATV 05 - ");

	printf("\nDigite 50 números inteiros, não repetidos, caso um número repita, ele será substituido por um não repetido:");

	i=0;
	j=0;
	int CincoDez[50];
	int repetiu = FALSE;

	for (i=0; i<50; ++i){

	scanf("%i", &CincoDez[i]);

	for (j=0; j<i; ++j){
		if (CincoDez[j]==CincoDez[i])
				{
					CincoDez[i]= rand() % 1000;
					repetiu = TRUE;
						}
			}
	if (repetiu == FALSE)
		{
			printf("\nO numero digitado é %i\n", CincoDez[i]);
				}else
					{
						printf("\nO número é repetido, portanto foi substituido por %i\n", CincoDez[i]);
						repetiu = FALSE;
							}

	}

	i=0;
	for(i=0; i<50; ++i){
		printf("~ %i ~ ", CincoDez[i]);
	}

	printf("\nPara prosseguir, precione alguma tecla:");
	getch();
	printf("\n////////////////////////////////////////////////////////\n");




	printf("\nATV 06 - ");

	printf("\nDigite um numero para ser encontrado na matriz[10][10]:\nOBS:A matriz contém apenas números entre 0 e 1000\n");

	int DezDez[10][10];
	int Busca, linha, coluna;

	int a,b;
	a=b=i=j=0;

	for (i=0; i<10; ++i){
	for(j=0; j<10; ++j){

		DezDez[i][j] = rand()%1000;

			for(a=0; a<i; ++a){
			for (b=0; b<j; ++b){

				if(DezDez[a][b]==DezDez[i][j]){
					DezDez[i][j] = rand()%100;
				}
//REPETE O MESMO COMANDO PARA REDUZIR AS CHANCES DE HAVER REPETIÇÃO;
				if(DezDez[a][b]==DezDez[i][j]){
					DezDez[i][j] = rand()%100;
				}
			}
			}

			printf(" ~%i~ ", DezDez[i][j]);
	}
	printf("\n");
	}

	printf("\n\nSELECIONE UM NUMERO PARA SABER SUA LOCALIZAÇÃO NA MATRIZ: ");
	scanf("%i", &Busca);


		for (i=0; i<10; ++i){
			for(j=0; j<10; ++j){

				if(Busca == DezDez[i][j]){
					linha = i;
					coluna = j;
				}

			}
		}

	printf("\nA localização do número %i é:\nLINHA = %i \nCOLUNA = %i \n", Busca, (linha+1), (coluna+1));


	printf("\nPara prosseguir, precione alguma tecla:");
	getch();
	printf("\n////////////////////////////////////////////////////////\n");




	printf("\nATV 07 - ");

	printf("\nO VETOR[30] É:");

	i=0;
	int search;
	int trinta[30];

	for(i=0; i<30; ++i){

		//trinta[i]=rand()%30;
		trinta[i] = i+1;

		printf(" ~%i~ ", trinta[i]);
	}

	printf("\nDIGITE UM NUMERO MENOR QUE TRINTA PARA DESLOCAR O VETOR DA DIREITA PARA A ESQUERDA:");

	scanf("%i", &search);
	printf("\n");

	i=0;
	for (i=search; i<30; ++i){

		printf(" ~%i~ ", trinta[i]);
	}
	i=0;
	for (i=0; i<search; ++i){

		printf(" ~%i~ ", trinta[i]);
	}


	printf("\nPara prosseguir, precione alguma tecla:");
	getch();
	printf("\n////////////////////////////////////////////////////////\n");




	printf("\nATV 08 - ");

	i=0;
	j=0;
	int bancoEsquerda, bancoDireita;
	int cincoCinco[5][5];

	printf("\nA MATRIZ[5][5] É:\n");

	for(i=0; i<5; ++i){
		for(j=0; j<5; ++j){
			cincoCinco[i][j] =rand()%100;
		printf("_%i_", cincoCinco[i][j]);
		}
	printf("\n");
	}

	//CICLO PARA A COLUNA UM = [I DE 0 À 4][J=0]

	printf("\nCOLUNA DA ESQUERDA8:\n");
	for(i=0; i<5; ++i){
		cincoCinco[i][0];
		if (i==0){
			bancoEsquerda = cincoCinco[i][0];
		}else if(cincoCinco[i][0]<=bancoEsquerda){
			bancoEsquerda = cincoCinco[i][0];
		}
		printf("\n ~ %i ", cincoCinco[i][0]);
	}

	//CICLO PARA A COLUNA CINCO = [I DE 0 À 4][J=4]

	printf("\nCOLUNA DA DIREITA:\n");
		for(i=0; i<5; ++i){
		cincoCinco[i][4];
		if (i==0){
			bancoDireita = cincoCinco[i][4];
		}else if(cincoCinco[i][4]<=bancoDireita){
			bancoDireita = cincoCinco[i][4];
		}
		printf("\n ~ %i ", cincoCinco[i][4]);
	}

printf("\nO menor numero da extremidade esquerda é %i", bancoEsquerda);
printf("\nO menor numero da extremidade direita é %i\n", bancoDireita);



    return 0;
}
