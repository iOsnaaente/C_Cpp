#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define TRUE 1
#define FALSE 0


int Sistema_Diario(char *nome[256]){

	setlocale(LC_ALL, "Portuguese");

	int menu, PAG, entrada;
    char palavra[1024], DiaMesAno[9], Hora[9];
    char DataPc[9], HoraPc[9];
    _strdate( DataPc ); 		//PEGA A DATA DO COMPUTADOR
    _strtime( HoraPc );			//PEGA A HORA DO COMPUTADOR		//NOSSO INDICE É A DATA E HORA

	do{
	system("cls");

	printf("SEJA BEM VINDO AO SISTEMA DE DIÁRIOS %s, SELECIONE O QUE DESEJA FAZER:\n", nome);
	printf("[1]•	Mostrar todo o diário na tela;\n[2]•	Mostrar uma página específica do diário utilizando um índice;\n");
	printf("[3]•	Escrever nova página no diário;\n[4]•	Remover uma página específica do diário, utilizando um índice;\n");
	printf("[5]•	Salvar o diário.\n[6]•	Sair\n"); //DIVIDI EM 3 PRINT POR ORGANIZAÇÃO ESTÉTICA.



	FILE *Diario;

	do{
		scanf("%d", &menu);

	}while(menu<=0 || menu>=7);

	//USAR UM SWITCH de 1 até 6 DEPOIS


	switch(menu){
	case 1:

		system("cls");
		Imprime_PaginaS(nome, '³' );
		break;


	case 2:
		printf("\nMOSTRAR PÁGINA ESPECÍFICA DE DIÁRIO\n\nDê entrada com o Mês/Dia/Ano (nos mesmos moldes mm/dd/aa) em que a página foi escrita: ");

		scanf("%s", &DiaMesAno);

		Imprime_PaginaS(DiaMesAno,'³');

		break;

	case 3:
		system("cls");
		printf("ESCREVER NOVA PÁGINA DE DIÁRIO\n");

		Diario = fopen("Diario.txt", "a");

		fprintf(Diario, "\n%s\n%s\n%s\n", nome, DataPc,HoraPc);

		printf("Olá %s, hoje é %s as %s.\n\nQUERIDO DIÁRIO: ", nome, DataPc, HoraPc);

		do{
			fflush(stdin);
			gets(palavra);

			printf("\nNOVA LINHA?? [ENTER]SIM  [BACKSPACE] SALVAR DIARIO E FINALIZAR PÁGINA\n");
			PAG = getch();

			fprintf(Diario, "%s", palavra);

			printf("\n");

		}while(PAG!=8);
		fprintf(Diario, "\n³");
		fclose(Diario);
		break;

	case 4:
		system("cls");
		printf("EXCLUIR PÁGINA ESPECÍFICA DO DIÁRIO\n\nDê entrada com a hora de edição da página do diário a ser excluida\n(respeite o molde [hh:mm:ss])");
		printf("\n[Pressione: [1]Para procurar a hora [2] Para dar entrada na hora\n");

		scanf("%i", &entrada);

		if(entrada==1){
			printf("\nMOSTRAR PÁGINA ESPECÍFICA DE DIÁRIO\n\nDê entrada com o Mês/Dia/Ano (nos mesmos moldes mm/dd/aa) em que a página foi escrita: ");
			scanf("%s", &DiaMesAno);
			Imprime_PaginaS(DiaMesAno,'³');
		}

		printf("Dê entrada a hora: ");
		scanf("%s", &Hora);

		Imprime_PaginaS(Hora, '³');




		break;
	case 5:
		system("cls");
		printf("~~DIÁRIO SALVO COM SUCESSO ~~ RETORNANDO PARA O MENU PRINCIPAL~~");
		getch();
		system("cls");
		fflush(stdin);
		main();

	case 6:
			return 0;


		}//FIM DO SWITCH


	}while(menu!=6);

}


