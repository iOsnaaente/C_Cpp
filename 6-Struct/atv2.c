#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("ATV 02 - ");
    
    typedef struct {
        char nome[20];
        int dia;
        int mes;
    } Pessoa;

    int i;
    Pessoa Dados[40];

    for(i=0;i<40;++i){

        printf("\nDigite o nome, dia do anivers�rio e m�s do anivers�rio da pessoa %d (DD/MM)", i+1);

        printf("\nNome:");
        scanf("%s", &Dados[i].nome);
        printf("Dia:");
        scanf("%i", &Dados[i].dia);
        printf("M�s:");
        scanf("%i", &Dados[i].mes);

        printf("\nCliente %s do dia %i/%i\n", Dados[i].nome, Dados[i].dia, Dados[i].mes);

    }

    printf("\nPessoas fazem anivers�rio em Maio:");
    for (i=0;i<40;++i){
		if (Dados[i].mes ==5 || Dados[i].mes==05){
		    printf("\n%s", Dados[i].nome);
		}
    }


    printf("\n///////////////////////////////////////////\n");
    getch();

    return 0;
}