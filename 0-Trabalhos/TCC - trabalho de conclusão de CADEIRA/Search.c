#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TRUE 1
#define FALSE 0


void Imprime_PaginaS(char nome[256],char caracter[256]){

	setlocale(LC_ALL, "Portuguese");


int a[256], i,j, banco[256], soma;
char ch[256], aux;


	FILE *t;
	t = fopen("Diario.txt", "r");

    //PRIMEIRO PROCURA O NOME DO USUARIO
    //IMPRIME TUDO ENTRE OS ³

    while ((aux=fgetc(t))!=EOF){

        a[i] = aux;
        ch[i] = a[i];

        ++i;

        if (aux=='\n'){

			for (j=0; j!=i; ++j){

                if (ch[j]==nome[j]){
                    banco[j]=0;

                }	else if (ch[j]!=nome[j]){
                    banco[j]=1;
					}

                soma+=banco[j];
            }

            if (soma==0 || (soma==1 && j>1)){
                i=0;

				while ((aux=fgetc(t))!=caracter){
					printf("%c", aux);

				}
            }
            soma =0;
            i=0;
        }
    }

	fclose(t);
	getch();
}
