#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

#define FALSE 0
#define TRUE 1


    int main()
    {
    setlocale(LC_ALL, "Portuguese");

	int selecao;

    do{
    printf("LISTA STRUCT ~~BRUNO GABRIEL FLORES SAMPAIO~~");
	printf("\n\nSelecione a atividade que deseja executar;\nATVIVIDADE 1 - COORDENADAS [1]\nATIVIDADE 2 - DADOS PESSOAIS [2]\nATIVIDADE 3 - PREÇOS DA CAFETEIRA [3]\nATIVIDADE 4 - SISTEMA DE BOVINOS [4]\nENCERRAR [0]\n");

	do{
	scanf("%d", &selecao);
	}while (selecao<1 || selecao>4);

	switch (selecao){

case 1:
	ATV_01();
    break;

case 2:
	ATV_02();
	break;

case 3:
	ATV_03();
	break;

case 4:
	ATV_04();
	break;

	}

    }while(selecao!=0);

    }

	int ATV_01(){

		printf("\n\nATV 01 - ");

		struct ponto2d{
		float X;
		float Y;
		};

		struct ponto2d ponto_inicial;
		struct ponto2d ponto_final;

		printf("\nDigite os pontos das coordenadas (X,Y) iniciais\n");
		scanf ("%f", &ponto_inicial.X);
		scanf ("%f", &ponto_inicial.Y);


		printf("\nDigite os pontos das coordenadas (X,Y) finais\n");
		scanf ("%f", &ponto_final.X);
		scanf ("%f", &ponto_final.Y);

		printf ("\nAs coordenas iniciais são (%.2f . %.2f)\nAs coordenadas finais são (%.2f . %.2f)\n", ponto_inicial.X , ponto_inicial.Y, ponto_final.X , ponto_final.Y);

		printf("\nA distância entre os pontos é: %f", sqrt(pow((ponto_inicial.X - ponto_final.X),2)+pow(ponto_final.Y - ponto_final.Y,2) ) );


		printf("\n///////////////////////////////////////////\n");
		getch();
    }



	int ATV_02(){

    printf("ATV 02 - ");

    typedef struct {
    char nome[20];
    int dia;
    int mes;
    } Pessoa;


    int i;
    Pessoa Dados[40];

    for(i=0;i<40;++i){

    printf("\nDigite o nome, dia do aniversário e mês do aniversário da pessoa %d (DD/MM)", i+1);

	printf("\nNome:");
    scanf("%s", &Dados[i].nome);
	printf("Dia:");
    scanf("%i", &Dados[i].dia);
  	printf("Mês:");
    scanf("%i", &Dados[i].mes);

	printf("\nCliente %s do dia %i/%i\n", Dados[i].nome, Dados[i].dia, Dados[i].mes);

    }

    printf("\nPessoas fazem aniversário em Maio:");
    for (i=0;i<40;++i){
		if (Dados[i].mes ==5 || Dados[i].mes==05){
		printf("\n%s", Dados[i].nome);
		}
    }


    printf("\n///////////////////////////////////////////\n");
    getch();
    }

	int ATV_03(){
		printf("ATV 03 - ALGORITIMO QUE LÊ E COMPARA O PREÇO DA CAFETEIRA LTX2500A");

		int i;

		typedef struct {
		char nome_loja[40];
		int telefone[1];
		float preco;
		}loja;


		int banco_preco =0;

		loja dados[15];

		for(i=0;i<3;++i){

			printf("\nNome da loja: ");

			scanf( "%s", dados[i].nome_loja);



			printf("Telefone da loja:\nDD	 ");

				scanf("%d", &dados[i].telefone[0]);

			printf("Número	");

				scanf("%d", &dados[i].telefone[1]);



			do {
			printf("Preço da Cafeteira LTX2500A: R$");
			scanf("%f", &dados[i].preco);
			}while(dados[i].preco<=0);

			banco_preco += dados[i].preco;


		}

		int media;

			media = banco_preco/3;

			printf("\nA media de preços da Cafeteira LTX2500A é de %d.", media);
			printf("\nAs lojas que possuem um preço inferior à média de preços são:\n");

			for (i=0;i<3;++i){
				if(dados[i].preco <=media){
					printf("%s\n", dados[i].nome_loja);
					printf("Telefone para contato: (%i) %i \n", dados[i].telefone[0], dados[i].telefone[1]);
				}
			}


		printf("\n///////////////////////////////////////////\n");
		getch();
}




	struct nasc{

	int mes;
	int ano;

	};


	typedef struct {

	int codigo;
	float quantia_leite;
	float alimento;
	int abate;

	struct nasc nascimento;

	} controle;

	controle gado[5];


	int menu, numero_animais=0;
	int i;
	int cod, repete;
	int ciclo=1;

	int ATV_04(){
	while (ciclo==1){

	printf("\n~~MENU ~CONTROLE DE BOVINOS~~\n\n[1]Inserir novo animal\n[2]Exibir todos os animais\n[3]Visualizar animal específico\n[4]Exibir animais prontos para o abate\n[5]Excluir animal\n " );

//[1]Inserir novo animal\n
//[2]Exibir todos os animais\n
//[3]Visualizar animal específico\n
//[4]Exibir animais prontos para o abate\n
//[5]Excluir animal\n

	do{

		scanf("%d", &menu);

	}while (menu<=0 || menu>5);


	if (menu==1){ //ADICIONAR NOVO ANIMAL


	do{

		menu_1();

		printf("\n\nDESEJA ADICIONAR OUTRO ANIMAL?\n[1]Sim\n[2]Não\n");
		do{
			scanf("%d", &repete);
			if(repete>2 || repete <1){
				printf("\nOPÇÃO INVÁLIDA\n");
			}	else {
					break;
				}
			}while (1);

		}while (repete==1);

	}

	if (menu==2){ //EXIBIR TODOS ANIMAIS

	menu_2();

	}

	if (menu==3){ //VISUALIZAR ANIMAL ESPECÍFICO

		do{

		menu_3();

		do{
			printf("\n\nDESEJA VISUALIZAR OUTRO ANIMAL?\n[1]Sim\n[2]Não\n");

			scanf("%d", &repete);
			if(repete>2 || repete <1){
				printf("\nOPÇÃO INVÁLIDA\n");
			}	else {
				break;
				}

		}while (1);

		}while (repete==1);
	}

	if (menu==4){ //EXIBIR ANIMAIS PARA O ABATE

		menu_4();

	}

	if (menu==5){ //EXCLUIR ANIMAL

	do{

		menu_5();

		do{
			printf("\n\nDeseja excluir outro animal?\n[1]Sim\n[2]Não\n");
			scanf("%d", &repete);
			if (repete<1 || repete>2){
				printf("\nOPÇÃO INVÁLIDA\n");
			}	else{
					break;
				}
		}while(repete<1 || repete>2);

	}while(repete==1);

	}


	system("cls");
	printf("\n\nDeseja executar outra função novamente?\n[1]SIM\n[2]NÃO\n");

	do{
		scanf("%d", &ciclo);

		if(ciclo==2){
			printf("\nENCERRANDO PROGRAMA.....");
			getch();
			break;

		}	else if(ciclo==1){
				system("cls");
				break;
			}

	}while(ciclo<=0 || ciclo>2);

	}


	return 0;
	}


	int menu_1(){


		system("cls");

		printf("\n~~ADICIONAR NOVO ANIMAL~~\n");

		printf("\nDigite o código do animal: ");
		scanf("%d", & gado[numero_animais].codigo);

		printf("\nNumero de litros de leite produzido pelo animal (l/dia): ");
		scanf("%f", & gado[numero_animais].quantia_leite);

		printf("\nQuantidade de alimento consumido (kg/dia): ");
		scanf("%f", &gado[numero_animais].alimento);

		printf("\nAnimal pronto para o abate: \n[1]Sim\n[2]Não\n");

		do {
			scanf("%d", &gado[numero_animais].abate);
			if (gado[numero_animais].abate==1){
				gado[numero_animais].abate=TRUE;
				break;
			} 	else if (gado[numero_animais].abate==2){
				gado[numero_animais].abate=FALSE;
				break;
				}	else {
					printf("\n~~CÓDIGO INVÁLIDO~~\n\n");
					getch();
					system("cls");
					}
		}while (1);


		printf("\nData de nascimento do animal:\nMes: ");
		do{
			scanf("%d", &gado[numero_animais].nascimento.mes);
			printf("\nAno: ");
				if (gado[numero_animais].nascimento.mes<=0 || gado[numero_animais].nascimento.mes>12){
					printf("\n~~MÊS INVÁLIDO~~");
				}	else {
						break;
							}
		}while (1);

		do{
		scanf("%d", &gado[numero_animais].nascimento.ano);
		if(gado[numero_animais].nascimento.ano<1990 || gado[numero_animais].nascimento.ano>2020){
			printf("\n~~ANO INVÁLIDO~~");
		}	else {
				break;
			}
		}while(1);

		++numero_animais;
   }

	int menu_2(){

		system("cls");

		printf("\n~~EXIBIR TODOS ANIMAIS~~\n\n~~POSSUEM %d ANIMAIS CADASTRADOS~~", numero_animais);

		i=0;
		while (i!=numero_animais){
			if (gado[i].codigo>0){
			printf("\n~~ANIMAL NUMERO %d / CÓDIGO %d ~~", i+1, gado[i].codigo );
			printf("\nQuantidade de leite produzida por dia: %.2f litros/dia", gado[i].quantia_leite);
			printf("\nQuantidade de alimento consumido por dia: %.2f Kg/dia", gado[i].alimento);
			if (gado[i].abate==TRUE){
				printf("\nAnimal pronto para o abate.");
			}	else{
				printf("\nAnimal NÃO pronto para o abate.");
				}
			printf("\nData de nascimento do animal %d é %d/%d",i+1, gado[i].nascimento.mes, gado[i].nascimento.ano);
			printf("\n\n	~~~~~~~~~~~~~~\n\n");
			}

		++i;
		}

		getch();
   }

	int menu_3(){

		system("cls");
		printf("\n\n~~VISUALIZAR ANIMAL ESPECÍFICO~~\n\nDigite o código do animal: ");
		scanf("%d", &cod);

		i=0;
		while(i!=numero_animais){
			if (cod == gado[i].codigo){

			printf("\n~~ANIMAL NUMERO %d / CÓDIGO %d ~~", i+1, gado[i].codigo );
			printf("\nQuantidade de leite produzida por dia: %.2f litros/dia", gado[i].quantia_leite);
			printf("\nQuantidade de alimento consumido por dia: %.2f Kg/dia", gado[i].alimento);
			if (gado[i].abate==TRUE){
				printf("\nAnimal pronto para o abate.");
			}	else{
				printf("\nAnimal NÃO pronto para o abate.");
				}
			printf("\nData de nascimento do animal %d é %d/%d",i+1, gado[i].nascimento.mes, gado[i].nascimento.ano);
			printf("\n\n	~~~~~~~~~~~~~~\n\n");


			}	else {
				printf("\n~~CÓDIGO INVÁLIDO~~");
				}



		}


   }

    int menu_4(){

		system("cls");
		printf("\n~~ANIMAIS PRONTOS PARA O ABATE~~\n\n");

		i=0;
		while (i!=numero_animais){

			if (gado[i].abate==TRUE){
				printf("Gado de código %d\nNascido em %d/%d \n\n", gado[i].codigo, gado[i].nascimento.mes, gado[i].nascimento.ano);
			}

		++i;
		}
		getch();
   }

	int menu_5(){

		system("cls");
		printf("\n~~EXCLUIR ANIMAL~~\n\n");
		printf("Digite o código do animal para ser excluso:\nAnimais disponíveis:\n");

		for(i=0;i!=numero_animais; ++i){
			if (gado[i].codigo>0){
				printf("%d\n", gado[i].codigo);
			}
		}

		printf("\n\nCÓDIGO DE EXCLUSÃO: ");
		scanf("%d", &cod);

		for(i=0; i<numero_animais;++i){

			if(cod==gado[i].codigo){

				gado[i].codigo=0;
				gado[i].abate=FALSE;
				gado[i].alimento=0;
				gado[i].quantia_leite=0;
				gado[i].nascimento.ano=0;
				gado[i].nascimento.mes=0;

			} 	else {
				printf("\nCÓDIGO INVÁLIDO");
				}
		}
   }
