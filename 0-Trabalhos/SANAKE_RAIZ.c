#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	//VARIAVEIS DO ESQUEMA DE COORDENADAS E COMANDOS;

	char comando;
	int X, Y, i, j, I, N, X2, Y2;

	int retific=0;

	//VARIAVEIS VETORES DA COOR E COORC;
	int COOR[11][11];
	int Pontuacao = 1;
	int repeticao =0;

	while (repeticao == 0){
	printf("\nOs comandos do jogo s�o: [W] [A] [S] [D] ");

		for(i=0; i<11; ++i){
			for(j=0; j<11; ++j){
				COOR[j][i] =0;
			}
		}

	X = Y =6;
	N =0;

	for(i=0; i<i+1; ++Pontuacao){

	X2 = rand()%11;
	Y2 = rand()%11;

	for (i=0; i<i +1; ++i){

	printf("\nA posi��o � (%i,%i)\n", X+1, Y+1);
	comando = getch();
	system("cls");
	printf("\n\n %c\n", comando);


switch (comando){
case 'w':
	--Y;
	++retific;
	break;

case 'a':
	--X;
	++retific;
	break;

case 's':
	++Y;
	++retific;
	break;

case 'd':
	++X;
	++retific;
	break;

case 'W':
	--Y;
	++retific;
	break;

case 'A':
	--X;
	++retific;
	break;

case 'S':
	++Y;
	++retific;
	break;

case 'D':
	++X;
	++retific;
	break;

default:
	break;}



	//SE BATER EM UM MAIOR QUE
	if (COOR[Y][X] >0 || X<0 || X>10 || Y<0 ||Y>10){	COOR[Y][X] = -100;
		break;	}




	//PRINTAR A TELA COM AS CORDENADAS E DECLARAS OS VALORES VAZIOS E CHEIOS
	for(i=0; i<11; ++i){
		for(j=0; j<11; ++j){

		if(Y2 == i && X2 == j ){
				COOR[i][j]= -1;
			}

		if (Y == i && X == j){
			COOR[i][j] = 1 + N;
		}


		printf(" [%i] ", COOR[i][j]);
		}
		printf("\n");
	}


		for(i=0; i<11; ++i){
			for(j=0; j<11; ++j){

				if (COOR[j][i] <1){
				COOR[j][i] =0;
				}
			}
		}





	//DETERMINAR O TAMANHO DO RASTRO DA COORDENADA PARA SOBREPOSI��O
	for(i=0; i<11; ++i){
		for(j=0; j<11; ++j){

		if(COOR[i][j]>=1){
				COOR[i][j] += -1;
			}
		}

		if(COOR[i][j]>=1){
				COOR[i][j] += -1;
		}
	}




	if (X == X2 && Y == Y2 ){	++N;	break;	}


	}

	if (COOR[Y][X] == -100 ){	break;	}

	}





	//ANTES DE FINALIZAR O PROGRMA, MOSTRA OS RESULTADOS;
	system("cls");
	printf("\n\nAs cordenas (X,Y) partindo da origem s�o: (%i,%i)\n\n", X, Y);
	printf("\n%i\n", N);
	printf("\nA sua pontua��o �: %i\n", (Pontuacao+retific)*110);

	printf("\nPara jogar novamente, digite [0], para encerrar, digite [1]. ");


	scanf("%i", &repeticao);
	}

	return 0;
	}
