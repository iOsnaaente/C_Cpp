#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define FALSE 0
#define TRUE 1

int  contador;
char OpcaoJogo;

int jogada;

char jog_1 = 'X', jog_2 = 'O', nulo = '_';

int i, j, k;

int GANHOU_O =FALSE;
int GANHOU_X =FALSE;
int EMPATE=0;

int Tabuleiro_guia[3][3];
int Tabuleiro[3][3];

int Jogar_novamente;
int OK = TRUE;
int Ok = 0;



int main(){


	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");

	while (OK==TRUE){

	//DECLARA O TABULEIRO NULO TODA VEZ Q UM NOVO JOGO COME�A

	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
		Tabuleiro[i][j] =0;
		}
	}





		printf("~~ JOGO ~~ DA ~~ VELHA ~~ \n ");
		Mostrar_Tabuleiro_Nulo();

		Selecionar_Modo_de_Jogo();

		Quem_Inicia_Jogo();

		Limpar_tela_Getch();



	while(OpcaoJogo=='M'){

		if (EMPATE==9){
			break;
		}

		Jogadores_Multi();
		CONFERE_JOGO();

		if(GANHOU_O==TRUE){
			printf("\n	GANHOU BOLINHA");
			break;
		}	else if(GANHOU_X==TRUE){
				printf("\n	GANHOU XIS");
				break;
			}	else if(EMPATE==9){
					printf("\n	EMPATE");
					break;
				}

	}


	while (OpcaoJogo=='S'){

	if (EMPATE==9){
		break;
	}

		Jogador_Single();
		CONFERE_JOGO();


		if(GANHOU_O==TRUE){
			printf("\n	GANHOU BOLINHA");
			break;
		}	else if(GANHOU_X==TRUE){
				printf("\n	GANHOU XIS");
				break;
			}	else if(EMPATE==9){
					printf("\n	EMPATE");
					break;
				}

	}



	printf("\n\n   ~TABULEIRO VENCEDOR~\n	");
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			if (Tabuleiro[i][j]==-10){
				printf(" %c ", jog_1);
			}	else if(Tabuleiro[i][j]==-1){
				printf(" %c ", jog_2);
				}	else{
					printf(" %c ", nulo);
					}

		}
				printf("\n	");
	}



	//JOGAR NOVAMENTE
		do{
		printf("\nDeseja jogar novamente ??\n[1]SIM\n[2]N�O\n");
		scanf("%d", &Jogar_novamente);
		if (Jogar_novamente==1){
			GANHOU_O=FALSE;
			GANHOU_X=FALSE;
			EMPATE=0;
			system("cls");
			break;
		}	else if (Jogar_novamente==2){
				OK = FALSE;
				break;
			} 	else {
					printf("\nOp��o inv�lida.\n");
					}

		}while (1);




	}

return 0;
}

int CONFERE_JOGO(){
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){

        //BOLINHA
            if(Tabuleiro[i][1]+Tabuleiro[i][2]+Tabuleiro[i][0]==-3){
                GANHOU_O=TRUE;
                break;
            }else if (Tabuleiro[0][j]+Tabuleiro[1][j]+Tabuleiro[2][j]==-3){
                GANHOU_O=TRUE;
                break;
            }else if(Tabuleiro[0][0]+Tabuleiro[1][1]+Tabuleiro[2][2]==-3||Tabuleiro[0][2]+Tabuleiro[1][1]+Tabuleiro[2][0]==-3){
                GANHOU_O=TRUE;
                break;
            }

        //XIS
            if(Tabuleiro[i][1]+Tabuleiro[i][2]+Tabuleiro[i][0]==-30){
                GANHOU_X=TRUE;
                break;
            }else if(Tabuleiro[0][j]+Tabuleiro[1][j]+Tabuleiro[2][j]==-30){
                GANHOU_X=TRUE;
                break;
            }else if(Tabuleiro[0][0]+Tabuleiro[1][1]+Tabuleiro[2][2]==-30||Tabuleiro[0][2]+Tabuleiro[1][1]+Tabuleiro[2][0]==-30){
                GANHOU_X=TRUE;
                break;
            }
        }
    }


}

int Mostrar_Tabuleiro_Nulo(){

    printf("\n");

    for(i=0; i<3; ++i){
        for(j=0; j<3; ++j){

            Tabuleiro_guia[i][j] = j + 3*i + 1;

        }
        printf("	%d | %d | %d \n", Tabuleiro_guia[i][0], Tabuleiro_guia[i][1], Tabuleiro_guia[i][2]);
    }

}

int Selecionar_Modo_de_Jogo(){

	while (1){

		printf("\nSelecione a op��o de jogo:\n\n[S]SinglePlayer\n[M]MultiPlayer\n");
		printf("\nDigite a op��o desejada: "); scanf("%c", &OpcaoJogo);


		if (OpcaoJogo == 'S' || OpcaoJogo == 's'){
			printf("\nOp�ao [S]SINGLEPLAYER: ");
			OpcaoJogo = 'S';
			system("cls");
			break;

		} else if (OpcaoJogo=='M' || OpcaoJogo=='m'){
			printf("\nOp�ao [M]MULTIPLAYER: ");
			OpcaoJogo = 'M';
			system("cls");
			break;

		} else {
			printf("\nOp��o inv�lida, digite [S]SinglePlayer ou [M]MultiPlayer\n\n");
			system("cls");
		}
	}

return 0;
}

int Quem_Inicia_Jogo(){

while (OpcaoJogo=='M'){
		printf("\n\nQUEM DESEJA INICIAR O JOGO:\n\n[1]Jogador X\n[2]Jogador O\n ");
		scanf("%d", &contador);

		if (contador == 2){
				printf("\nJogador O inicia o jogo.\n");
				contador=TRUE;
				break;

			}else if (contador ==1){
				printf("\nJogador X inicia o jogo.\n");
				contador=FALSE;
				break;
				}else {
					printf("Op��o inv�lida, Selecione uma opi��o v�lida.\n");

		}
}

while (OpcaoJogo=='S'){
		printf("\n\nQUEM DESEJA INICIAR O JOGO:\n\n[1]Jogador X\n[2]Jogador O (Computador)\n ");
		scanf("%d", &contador);

		if (contador == 2){
				printf("\nJogador O (Computador) inicia o jogo.\n");
				contador=TRUE;
				break;

			}else if (contador ==1){
				printf("\nJogador X inicia o jogo.\n");
				contador=FALSE;
				break;
				}else {
					printf("Op��o inv�lida, Selecione uma opi��o v�lida.\n");

		}
}


}

int Limpar_tela_Getch(){

	printf("\n\nPRESSIONE ALGUMA TECLA PARA CONTINUAR\n");
	getch(); //PAUSA ANTES DE LIMPAR A TELA
	system("cls");
}

int Jogadores_Multi(){


if (contador==TRUE){

printf("   ~TABULEIRO DO JOGO~\n	");
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){

	if (Tabuleiro[i][j]==-10){
		printf(" %c ", jog_1);
	}	else if(Tabuleiro[i][j]==-1){
		printf(" %c ", jog_2);
		}	else{
			printf(" %c ", nulo);
			}

		}
		printf("\n	");
	}

	printf("\n");
	printf("   ~TABULEIRO GUIA~");
	Mostrar_Tabuleiro_Nulo();



	do{
	puts("\nVez do jogador O\n");
		do{
		scanf("%d", &jogada);
			if (jogada<=0 || jogada>9){
				printf("\nJogada fora dos par�metros.\nTente novamente.");
			}
		}while (jogada<=0 || jogada>9);




		for(i=0;i<3;++i){
			for(j=0;j<3;++j){

				if(Tabuleiro_guia[i][j]==jogada && Tabuleiro[i][j]==0){
					Tabuleiro[i][j]= -1;
					contador =FALSE;


				}	else if (Tabuleiro_guia[i][j]==jogada && Tabuleiro[i][j]!=0){
						printf("\nJogada inv�lida. Escolha uma op��o dispon�vel\n");
					}
			}
		}

	}while (contador==TRUE);
	++EMPATE;
	system("cls");

}else if (contador == FALSE){

printf("   ~TABULEIRO DO JOGO~\n	");
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			if (Tabuleiro[i][j]==-10){
				printf(" %c ", jog_1);
			}	else if(Tabuleiro[i][j]==-1){
				printf(" %c ", jog_2);
				}	else{
					printf(" %c ", nulo);
					}

		}
				printf("\n	");
	}

	printf("\n");
	printf("   ~TABULEIRO GUIA~");
	Mostrar_Tabuleiro_Nulo();



	do{
		puts("\nVez do jogador X\n");
		do{
			scanf("%d", &jogada);
			if (jogada<=0 || jogada>9){
			printf("\nJogada fora dos par�metros.\nTente novamente.");
			}

		}while (jogada<=0 || jogada>9);

		for(i=0;i<3;++i){
			for(j=0;j<3;++j){
				if(Tabuleiro_guia[i][j]==jogada && Tabuleiro[i][j]==0){
					Tabuleiro[i][j]= -10;
					contador =TRUE;


				}	else if (Tabuleiro_guia[i][j]==jogada && Tabuleiro[i][j]!=0){
							printf("\nJogada inv�lida. Escolha uma op��o dispon�vel\n");
					}
			}
		}

		}while (contador==FALSE);
		++EMPATE;
		system("cls");
}
}

int Jogador_Single(){

if (contador==TRUE){

system("cls");

	do{

		do{

	if(Tabuleiro[0][0]+Tabuleiro[0][1] == -20 && Tabuleiro[0][2]==0){
	jogada = Tabuleiro_guia[0][2];

	}else if(Tabuleiro[1][0]+Tabuleiro[1][1] ==-20 && Tabuleiro[1][2]==0){
	jogada = Tabuleiro_guia[1][2];

	}else if(Tabuleiro[2][0]+Tabuleiro[2][1] ==-20 && Tabuleiro[2][2]==0){
	jogada = Tabuleiro_guia[2][2];



	}else if(Tabuleiro[0][0]+Tabuleiro[0][2] ==-20 && Tabuleiro[0][1]==0){
	jogada = Tabuleiro_guia[0][1];

	}else if(Tabuleiro[1][0]+Tabuleiro[1][2] ==-20 && Tabuleiro[1][1]==0){
	jogada = Tabuleiro_guia[1][1];

	}else if(Tabuleiro[2][0]+Tabuleiro[2][2] ==-20 && Tabuleiro[2][1]==0){
	jogada = Tabuleiro_guia[2][1];



	}else if(Tabuleiro[0][1]+Tabuleiro[0][2] ==-20 && Tabuleiro[0][0]==0){
	jogada = Tabuleiro_guia[0][0];

	}else if(Tabuleiro[1][1]+Tabuleiro[1][2] ==-20 && Tabuleiro[1][0]==0){
	jogada = Tabuleiro_guia[1][0];

	}else if(Tabuleiro[2][1]+Tabuleiro[2][2] ==-20 && Tabuleiro[2][0]==0){
	jogada = Tabuleiro_guia[2][0];



	}else if(Tabuleiro[0][0]+Tabuleiro[1][0] ==-20 && Tabuleiro[2][0]==0){
	jogada = Tabuleiro_guia[2][0];

	}else if(Tabuleiro[0][1]+Tabuleiro[1][1] ==-20 && Tabuleiro[2][1]==0){
	jogada = Tabuleiro_guia[2][1];

	}else if(Tabuleiro[0][2]+Tabuleiro[1][2] ==-20 && Tabuleiro[2][2]==0){
	jogada = Tabuleiro_guia[2][2];




	}else if(Tabuleiro[0][0]+Tabuleiro[2][0] ==-20 && Tabuleiro[1][0]==0){
	jogada = Tabuleiro_guia[1][0];

	}else if(Tabuleiro[0][1]+Tabuleiro[2][1] ==-20 && Tabuleiro[1][1]==0){
	jogada = Tabuleiro_guia[1][1];

	}else if(Tabuleiro[0][2]+Tabuleiro[2][2] ==-20 && Tabuleiro[1][2]==0){
	jogada = Tabuleiro_guia[1][2];




	}else if(Tabuleiro[1][0]+Tabuleiro[2][0] ==-20 && Tabuleiro[0][0]==0){
	jogada = Tabuleiro_guia[0][0];

	}else if(Tabuleiro[1][1]+Tabuleiro[2][1] ==-20 && Tabuleiro[0][1]==0){
	jogada = Tabuleiro_guia[0][1];

	}else if(Tabuleiro[1][2]+Tabuleiro[2][2] ==-20 && Tabuleiro[0][2]==0){
	jogada = Tabuleiro_guia[0][2];



	}else if(Tabuleiro[0][0]+Tabuleiro[1][1] ==-20 && Tabuleiro[2][2]==0){
	jogada = Tabuleiro_guia[2][2];

	}else if(Tabuleiro[0][0]+Tabuleiro[2][2] ==-20 && Tabuleiro[1][1]==0){
	jogada = Tabuleiro_guia[1][1];

	}else if(Tabuleiro[2][2]+Tabuleiro[1][1] ==-20 && Tabuleiro[0][0]==0){
	jogada = Tabuleiro_guia[0][0];

	}else if(Tabuleiro[0][2]+Tabuleiro[1][1] ==-20 && Tabuleiro[2][0]==0){
	jogada = Tabuleiro_guia[2][0];

	}else if(Tabuleiro[2][0]+Tabuleiro[0][2] ==-20 && Tabuleiro[1][1]==0){
	jogada = Tabuleiro_guia[1][1];

	}else if(Tabuleiro[2][0]+Tabuleiro[1][1] ==-20 && Tabuleiro[0][2]==0){
	jogada = Tabuleiro_guia[0][2];


	}else if(Tabuleiro[0][0]+Tabuleiro[0][1] == -20 && Tabuleiro[0][2]==0){
	jogada = Tabuleiro_guia[0][2];

	}else if(Tabuleiro[1][0]+Tabuleiro[1][1] ==-20 && Tabuleiro[1][2]==0){
	jogada = Tabuleiro_guia[1][2];

	}else if(Tabuleiro[2][0]+Tabuleiro[2][1] ==-20 && Tabuleiro[2][2]==0){
	jogada = Tabuleiro_guia[2][2];



	}else if(Tabuleiro[0][0]+Tabuleiro[0][2] ==-20 && Tabuleiro[0][1]==0){
	jogada = Tabuleiro_guia[i][1];

	}else if(Tabuleiro[1][0]+Tabuleiro[1][2] ==-20 && Tabuleiro[1][1]==0){
	jogada = Tabuleiro_guia[i][1];

	}else if(Tabuleiro[2][0]+Tabuleiro[2][2] ==-20 && Tabuleiro[2][1]==0){
	jogada = Tabuleiro_guia[2][1];



	}else if(Tabuleiro[0][1]+Tabuleiro[0][2] ==-20 && Tabuleiro[0][0]==0){
	jogada = Tabuleiro_guia[0][0];

	}else if(Tabuleiro[1][1]+Tabuleiro[1][2] ==-20 && Tabuleiro[1][0]==0){
	jogada = Tabuleiro_guia[1][0];

	}else if(Tabuleiro[2][1]+Tabuleiro[2][2] ==-20 && Tabuleiro[2][0]==0){
	jogada = Tabuleiro_guia[2][0];



	}else if(Tabuleiro[0][0]+Tabuleiro[1][0] ==-20 && Tabuleiro[2][0]==0){
	jogada = Tabuleiro_guia[2][0];

	}else if(Tabuleiro[0][1]+Tabuleiro[1][1] ==-20 && Tabuleiro[2][1]==0){
	jogada = Tabuleiro_guia[2][1];

	}else if(Tabuleiro[0][2]+Tabuleiro[1][2] ==-20 && Tabuleiro[2][2]==0){
	jogada = Tabuleiro_guia[2][2];




	}else if(Tabuleiro[0][0]+Tabuleiro[2][0] ==-20 && Tabuleiro[1][0]==0){
	jogada = Tabuleiro_guia[1][0];

	}else if(Tabuleiro[0][1]+Tabuleiro[2][1] ==-20 && Tabuleiro[1][1]==0){
	jogada = Tabuleiro_guia[1][1];

	}else if(Tabuleiro[0][2]+Tabuleiro[2][2] ==-20 && Tabuleiro[1][2]==0){
	jogada = Tabuleiro_guia[1][2];




	}else if(Tabuleiro[1][0]+Tabuleiro[2][0] ==-20 && Tabuleiro[0][0]==0){
	jogada = Tabuleiro_guia[0][0];

	}else if(Tabuleiro[1][1]+Tabuleiro[2][1] ==-20 && Tabuleiro[0][1]==0){
	jogada = Tabuleiro_guia[0][1];

	}else if(Tabuleiro[1][2]+Tabuleiro[2][2] ==-20 && Tabuleiro[0][2]==0){
	jogada = Tabuleiro_guia[0][2];

	}else if(Tabuleiro[0][0]+Tabuleiro[1][1] ==-2 && Tabuleiro[2][2]==0){
	jogada = Tabuleiro_guia[2][2];

	}else if(Tabuleiro[0][0]+Tabuleiro[2][2] ==-2 && Tabuleiro[1][1]==0){
	jogada = Tabuleiro_guia[1][1];

	}else if(Tabuleiro[2][2]+Tabuleiro[1][1] ==-2 && Tabuleiro[0][0]==0){
	jogada = Tabuleiro_guia[0][0];

	}else if(Tabuleiro[0][2]+Tabuleiro[1][1] ==-2 && Tabuleiro[2][0]==0){
	jogada = Tabuleiro_guia[2][0];

	}else if(Tabuleiro[2][0]+Tabuleiro[0][2] ==-2 && Tabuleiro[1][1]==0){
	jogada = Tabuleiro_guia[1][1];

	}else if(Tabuleiro[2][0]+Tabuleiro[1][1] ==-2 && Tabuleiro[0][2]==0){
	jogada = Tabuleiro_guia[0][2];
	} else {jogada = rand()%9;}

	if(jogada>0 && jogada<=9){
		break;
	} else {jogada = rand()%10;}

printf(" %d " ,jogada);
	++Ok;
	}while (OK<=9);

		for(i=0;i<3;++i){
			for(j=0;j<3;++j){

				if(Tabuleiro_guia[i][j]==jogada && Tabuleiro[i][j]==0){
					Tabuleiro[i][j]= -1;
					contador =FALSE;
				}

			}
		}
printf("   ~TABULEIRO DO JOGO~\n	");
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){

	if (Tabuleiro[i][j]==-10){
		printf(" %c ", jog_1);
	}	else if(Tabuleiro[i][j]==-1){
		printf(" %c ", jog_2);
		}	else{
			printf(" %c ", nulo);
			}

		}
		printf("\n	");
	}

	printf("\n");
	printf("   ~TABULEIRO GUIA~");
	Mostrar_Tabuleiro_Nulo();

	printf("\nO computador jogou %d\n\n\nPressione uma tecla para continuar.", jogada);

	}while (contador==TRUE);
	++EMPATE;
	getch();
	system("cls");

}else if (contador == FALSE){

printf("   ~TABULEIRO DO JOGO~\n	");
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			if (Tabuleiro[i][j]==-10){
				printf(" %c ", jog_1);
			}	else if(Tabuleiro[i][j]==-1){
				printf(" %c ", jog_2);
				}	else{
					printf(" %c ", nulo);
					}

		}
				printf("\n	");
	}

	printf("\n");
	printf("   ~TABULEIRO GUIA~");
	Mostrar_Tabuleiro_Nulo();


	do{
		puts("\nVez do jogador X\n");
		do{
			scanf("%d", &jogada);
			if (jogada<=0 || jogada>9){
			printf("\nJogada fora dos par�metros.\nTente novamente.");
			}

		}while (jogada<=0 || jogada>9);

		for(i=0;i<3;++i){
			for(j=0;j<3;++j){
				if(Tabuleiro_guia[i][j]==jogada && Tabuleiro[i][j]==0){
					Tabuleiro[i][j]= -10;
					contador =TRUE;


				}	else if (Tabuleiro_guia[i][j]==jogada && Tabuleiro[i][j]!=0){
							printf("\nJogada inv�lida. Escolha uma op��o dispon�vel\n");
					}
			}
		}

		}while (contador==FALSE);
		++EMPATE;
		system("cls");
}


}

