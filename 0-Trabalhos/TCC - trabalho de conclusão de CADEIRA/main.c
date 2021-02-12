#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>


#define DEZ 10
#define TRUE 1
#define FALSE 0


 int main(){
setlocale(LC_ALL, "Portuguese");


	FILE *Login;
	int NovoUsuario,Usuario,i,j;
    char nome[256], senha[256];

    Login = fopen("Login.txt", "a");
    fclose(Login);


	int menu;
	do{
	printf("    --SISTEMA DE DIÁRIOS ULTRAMODERNO--\nO QUE DESEJA FAZER?\n");
	printf("[1] Fazer Login\n[2] Cadastrar novo Usuário\n[3] Sair\n");
	scanf("%i", &menu);

	}while(menu <=0 || menu>=4);

	switch (menu){

case 1:
	system("cls");

	printf("    ~~SISTEMA DE DIÁRIOS~~\n  Login de conta\nUsuario: ");
	fflush(stdin);
    gets(nome);
    printf("Senha: ");


	for (i=0;i<256;++i){

		system("cls");
		printf("    ~~SISTEMA DE DIÁRIOS~~\n  Login de conta\nUsuario: ");
		fflush(stdin);
		puts(nome);
		printf("Senha: ");

		for (j=0;j<i;++j){
			printf("*");
		}

		senha[i] = getch();
		if(senha[i]==13){
			break;
		}

	}




	Usuario = Fazer_Login(nome, senha);

	if (Usuario==TRUE){
		Sistema_Diario(nome);
	}

	break;


case 2:
	Registro_NovoUsuario();
	break;

case 3:
	system("cls");
	printf("\n\nVOLTE SEMPRE !!!\n\n");
	break;
	}




 return 0;
 }
