#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TRUE 1
#define FALSE 0



int Registro_NovoUsuario(){

setlocale(LC_ALL, "Portuguese");

	char ch[256], aux;
	int CONFIRMACAO, soma=0, a[256], banco[256];
	int i, j, k, UsuarioCorreto, simNao, certeza;
	char nome[256], senha[256];

	FILE *Login;

	do{
		system("cls");
		printf("    ~~SISTEMA DE DIÁRIOS~~");
		printf("\n\n  REGISTRO DE NOVO USUÁRIO\n  Usuário: ");
		fflush(stdin);
		gets(nome);
		printf("  Senha: ");
		//gets(senha);

		for(i=0;i<256;++i){

			system("cls");
			printf("    ~~SISTEMA DE DIÁRIOS~~");
			printf("\n\n  REGISTRO DE NOVO USUÁRIO\n  Usuário: ");
			fflush(stdin);
			puts(nome);
			printf("  Senha: ");

				for (j=0;j<i;++j){
					printf("*");
				}

				senha[i] = getch();

				if(senha[i]==13){
					break;
				}

		}


		Login = fopen("Login.txt", "r");

		i=0;
		while ((aux=fgetc(Login))!=EOF){

			a[i] = aux;
			ch[i] = a[i];

			++i;

			if (aux=='\n'){

				for (j=0; j!=i; ++j){

					if (ch[j]==nome[j]){
						banco[j]=0;

					}else if (ch[j]!=nome[j]){
						banco[j]=1;
					}

					soma+=banco[j];
				}

				if (soma==0 || (soma==1 && j>1)){
					UsuarioCorreto = FALSE;
					i=0;
					break;
				} else {
					UsuarioCorreto = TRUE;
				}
				soma =0;
				i=0;
			}
		}
		fclose(Login);

		if (UsuarioCorreto==FALSE){
			printf("\nUSUARIO JÁ EM USO, TENTE NOVAMENTE COM UM NOVO USUÁRIO !!!");
			getch();
		}

		if (UsuarioCorreto==TRUE){

			Login = fopen("Login.txt", "a");

			if(Login==NULL){
				printf("Não foi possível registrar novo usuário devido um erro no sistema.");
			}else{

				do{
					system("cls");
					printf("\nTEM CERTEZA QUE DESEJA CADASTRAR O USUÁRIO %s ? [1]SIM [2]NÃO\n",nome );
					scanf("%i", &certeza);

				}while(certeza<1 || certeza>2);

				if(certeza==1){
					fprintf(Login, "%s\n%s\n³\n", nome, senha);
					system("cls");
					printf("	~~REGISTRADO UM NOVO USUÁRIO~~\n  SEJA BEM VINDO(A) %s !!!", nome);
				}
			}
		fclose(Login);
		}

		printf("\nREGISTRAR NOVO USUÁRIO\n[1]SIM\n[2]NÃO\n");
		scanf("%i", &simNao);

		}while(simNao==1);

		system("cls");
		main();
}
