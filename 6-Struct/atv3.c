#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("ATV 03 - ALGORITIMO QUE L� E COMPARA O PRE�O DA CAFETEIRA LTX2500A");

    int i;

    typedef struct {
        char nome_loja[40];
        int telefone[1];
        float preco;
    }loja;


    int banco_preco =0;

    loja dados[15];

    for( i = 0; i < 3; i++ ){

        printf("\nNome da loja: ");
        scanf( "%s", dados[i].nome_loja);

        printf("Telefone da loja:\nDD	 ");
        scanf("%d", &dados[i].telefone[0]);

        printf("N�mero	");
        scanf("%d", &dados[i].telefone[1]);

        do {
            printf("Pre�o da Cafeteira LTX2500A: R$");
            scanf("%f", &dados[i].preco);
        }while(dados[i].preco<=0);

        banco_preco += dados[i].preco;
    }

    int media;

    media = banco_preco/3;

    printf("\nA media de pre�os da Cafeteira LTX2500A � de %d.", media);
    printf("\nAs lojas que possuem um pre�o inferior � m�dia de pre�os s�o:\n");

    for (i=0;i<3;++i){
        if(dados[i].preco <=media){
            printf("%s\n", dados[i].nome_loja);
            printf("Telefone para contato: (%i) %i \n", dados[i].telefone[0], dados[i].telefone[1]);
        }
    }

    printf("\n///////////////////////////////////////////\n");
    getch();

    return 0;
}