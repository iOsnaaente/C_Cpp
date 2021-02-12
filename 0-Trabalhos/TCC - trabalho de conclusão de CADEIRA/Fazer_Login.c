#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


#define DEZ 10
#define TRUE 1
#define FALSE 0




int Fazer_Login(char nome[256], char senha[256]){
setlocale(LC_ALL, "Portuguese");

int OK = FALSE;


system("cls");

	char aux, ch[256];
    int a[256], i, j, soma=0, banco[256];
    int SenhaCorreta, UsuarioCorreto, simNao;

    FILE *Login;
    Login = fopen("Login.txt", "r");

    if (Login==NULL){
        printf("ERRO NA ABERTURA DO ARQUIVO LOGIN.TXT");
    }

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

            if (soma==0 || soma ==1){
                UsuarioCorreto = TRUE;

                i=0;
                while ((aux=fgetc(Login))!='³'){a[i] = aux;ch[i] = a[i];++i; soma=0;}

				for (j=0;j!=i;++j){
					if (ch[j]==senha[j]){
						banco[j]=0;
					}else if (ch[j]!=senha[j]){
						banco[j]=1;}soma+=banco[j];
				}
				if (soma==0 || (soma ==1 && j>0)){
					SenhaCorreta = TRUE;
				} else {
					SenhaCorreta = FALSE;
				}

                break;

            } else {
            	UsuarioCorreto = FALSE;
			}

            soma =0;
            i=0;
        }
    }


    if (UsuarioCorreto == FALSE){
		printf("Nenhum Usuario encontrado!!!");
		printf("Deseja cadastrar um novo usuário ?\n[1]SIM\n[2]NÃO\n");

		do{
		scanf("%i", &simNao);
		if (simNao==1){
			Registro_NovoUsuario(nome, senha); // AQUI
		}else{
			OK = FALSE;
			printf("\nRETORNANDO PARA O MENU PRINCIPAL.");
			getch();
			system("cls");
			main();
		}
		}while(simNao<1 || simNao>2);



    } else if (SenhaCorreta==FALSE){
		printf("Senha incorreta!!!");
		getch();
		main();
		OK = FALSE;
    }


    fclose(Login);


     if (UsuarioCorreto==TRUE && SenhaCorreta==TRUE){
		OK = TRUE;
    }



    return OK;
}

