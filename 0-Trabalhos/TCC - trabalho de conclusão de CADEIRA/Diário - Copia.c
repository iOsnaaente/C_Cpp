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
    _strtime( HoraPc );			//PEGA A HORA DO COMPUTADOR		//NOSSO INDICE � A DATA E HORA

	do{
	system("cls");

	printf("SEJA BEM VINDO AO SISTEMA DE DI�RIOS %s, SELECIONE O QUE DESEJA FAZER:\n", nome);
	printf("[1]�	Mostrar todo o di�rio na tela;\n[2]�	Mostrar uma p�gina espec�fica do di�rio utilizando um �ndice;\n");
	printf("[3]�	Escrever nova p�gina no di�rio;\n[4]�	Remover uma p�gina espec�fica do di�rio, utilizando um �ndice;\n");
	printf("[5]�	Salvar o di�rio.\n[6]�	Sair\n"); //DIVIDI EM 3 PRINT POR ORGANIZA��O EST�TICA.



	FILE *Diario;

	do{
		scanf("%d", &menu);

	}while(menu<=0 || menu>=7);

	//USAR UM SWITCH de 1 at� 6 DEPOIS


	switch(menu){
	case 1:

		system("cls");
		Imprime_PaginaS(nome, '�' );
		break;


	case 2:
		printf("\nMOSTRAR P�GINA ESPEC�FICA DE DI�RIO\n\nD� entrada com o M�s/Dia/Ano (nos mesmos moldes mm/dd/aa) em que a p�gina foi escrita: ");

		scanf("%s", &DiaMesAno);

		Imprime_PaginaS(DiaMesAno,'�');

		break;

	case 3:
		system("cls");
		printf("ESCREVER NOVA P�GINA DE DI�RIO\n");

		Diario = fopen("Diario.txt", "a");

		fprintf(Diario, "\n%s\n%s\n%s\n", nome, DataPc,HoraPc);

		printf("Ol� %s, hoje � %s as %s.\n\nQUERIDO DI�RIO: ", nome, DataPc, HoraPc);

		do{
			fflush(stdin);
			gets(palavra);

			printf("\nNOVA LINHA?? [ENTER]SIM  [BACKSPACE] SALVAR DIARIO E FINALIZAR P�GINA\n");
			PAG = getch();

			fprintf(Diario, "%s", palavra);

			printf("\n");

		}while(PAG!=8);
		fprintf(Diario, "\n�");
		fclose(Diario);
		break;

	case 4:
		system("cls");
		printf("EXCLUIR P�GINA ESPEC�FICA DO DI�RIO\n\nD� entrada com a hora de edi��o da p�gina do di�rio a ser excluida\n(respeite o molde [hh:mm:ss])");
		printf("\n[Pressione: [1]Para procurar a hora [2] Para dar entrada na hora\n");

		scanf("%i", &entrada);

		if(entrada==1){
			printf("\nMOSTRAR P�GINA ESPEC�FICA DE DI�RIO\n\nD� entrada com o M�s/Dia/Ano (nos mesmos moldes mm/dd/aa) em que a p�gina foi escrita: ");
			scanf("%s", &DiaMesAno);
			Imprime_PaginaS(DiaMesAno,'�');
		}

		printf("D� entrada a hora: ");
		scanf("%s", &Hora);

		Imprime_PaginaS(Hora, '�');




		break;
	case 5:
		system("cls");
		printf("~~DI�RIO SALVO COM SUCESSO ~~ RETORNANDO PARA O MENU PRINCIPAL~~");
		getch();
		system("cls");
		fflush(stdin);
		main();

	case 6:
			return 0;


		}//FIM DO SWITCH


	}while(menu!=6);

}


