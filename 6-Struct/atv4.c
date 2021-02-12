#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

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


int main(){

	while (ciclo==1){

        printf("\n~~MENU ~CONTROLE DE BOVINOS~~\n\n[1]Inserir novo animal\n[2]Exibir todos os animais\n[3]Visualizar animal espec�fico\n[4]Exibir animais prontos para o abate\n[5]Excluir animal\n " );

        //[1]Inserir novo animal\n
        //[2]Exibir todos os animais\n
        //[3]Visualizar animal espec�fico\n
        //[4]Exibir animais prontos para o abate\n
        //[5]Excluir animal\n

        do{
            scanf("%d", &menu);
        }while (menu<=0 || menu>5);


	    if (menu==1){ //ADICIONAR NOVO ANIMAL
            do{
                menu_1();
                printf("\n\nDESEJA ADICIONAR OUTRO ANIMAL?\n[1]Sim\n[2]N�o\n");
                do{
                    scanf("%d", &repete);
                    if(repete>2 || repete <1){
                        printf("\nOP��O INV�LIDA\n");
                    }else {
                        break;
                    }
                }while (1);
            }while (repete==1);
	    }

	    if (menu==2){ //EXIBIR TODOS ANIMAIS
	        menu_2();
	    }

	    if (menu==3){ //VISUALIZAR ANIMAL ESPEC�FICO
            do{
                menu_3();
                do{
                    printf("\n\nDESEJA VISUALIZAR OUTRO ANIMAL?\n[1]Sim\n[2]N�o\n");

                    scanf("%d", &repete);
                    if(repete>2 || repete <1){
                        printf("\nOP��O INV�LIDA\n");
                    }else {
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
                    printf("\n\nDeseja excluir outro animal?\n[1]Sim\n[2]N�o\n");
                    scanf("%d", &repete);
                    if (repete<1 || repete>2){
                        printf("\nOP��O INV�LIDA\n");
                    }else{
                        break;
                    }
                }while(repete<1 || repete>2);
            }while(repete==1);
        }

        system("cls");
        printf("\n\nDeseja executar outra fun��o novamente?\n[1]SIM\n[2]N�O\n");

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

    printf("\nDigite o c�digo do animal: ");
    scanf("%d", & gado[numero_animais].codigo);

    printf("\nNumero de litros de leite produzido pelo animal (l/dia): ");
    scanf("%f", & gado[numero_animais].quantia_leite);

    printf("\nQuantidade de alimento consumido (kg/dia): ");
    scanf("%f", &gado[numero_animais].alimento);

    printf("\nAnimal pronto para o abate: \n[1]Sim\n[2]N�o\n");

    do {
        scanf("%d", &gado[numero_animais].abate);
        if (gado[numero_animais].abate==1){
            gado[numero_animais].abate=TRUE;
            break;
        }else if (gado[numero_animais].abate==2){
            gado[numero_animais].abate=FALSE;
            break;
        }else {
            printf("\n~~C�DIGO INV�LIDO~~\n\n");
            getch();
            system("cls");
        }
    }while (1);


    printf("\nData de nascimento do animal:\nMes: ");
    do{
        scanf("%d", &gado[numero_animais].nascimento.mes);
        printf("\nAno: ");
        if (gado[numero_animais].nascimento.mes<=0 || gado[numero_animais].nascimento.mes>12){
            printf("\n~~M�S INV�LIDO~~");
        }else {
            break;
        }
    }while (1);

    do{
        scanf("%d", &gado[numero_animais].nascimento.ano);
        if(gado[numero_animais].nascimento.ano<1990 || gado[numero_animais].nascimento.ano>2020){
            printf("\n~~ANO INV�LIDO~~");
        }else {
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
            printf("\n~~ANIMAL NUMERO %d / C�DIGO %d ~~", i+1, gado[i].codigo );
            printf("\nQuantidade de leite produzida por dia: %.2f litros/dia", gado[i].quantia_leite);
            printf("\nQuantidade de alimento consumido por dia: %.2f Kg/dia", gado[i].alimento);
            if (gado[i].abate==TRUE){
                printf("\nAnimal pronto para o abate.");
            }else{
                printf("\nAnimal N�O pronto para o abate.");
            }
            printf("\nData de nascimento do animal %d � %d/%d",i+1, gado[i].nascimento.mes, gado[i].nascimento.ano);
            printf("\n\n	~~~~~~~~~~~~~~\n\n");
        }
        ++i;
    }
    getch();
}


int menu_3(){

    system("cls");
    printf("\n\n~~VISUALIZAR ANIMAL ESPEC�FICO~~\n\nDigite o c�digo do animal: ");
    scanf("%d", &cod);

    i=0;
    while(i!=numero_animais){
        if (cod == gado[i].codigo){

            printf("\n~~ANIMAL NUMERO %d / C�DIGO %d ~~", i+1, gado[i].codigo );
            printf("\nQuantidade de leite produzida por dia: %.2f litros/dia", gado[i].quantia_leite);
            printf("\nQuantidade de alimento consumido por dia: %.2f Kg/dia", gado[i].alimento);
        
        if (gado[i].abate==TRUE){
            printf("\nAnimal pronto para o abate.");
        }else{
            printf("\nAnimal N�O pronto para o abate.");
        }

        printf("\nData de nascimento do animal %d � %d/%d",i+1, gado[i].nascimento.mes, gado[i].nascimento.ano);
        printf("\n\n	~~~~~~~~~~~~~~\n\n");

        }else {
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
    printf("Digite o c�digo do animal para ser excluso:\nAnimais dispon�veis:\n");

    for(i=0;i!=numero_animais; ++i){
        if (gado[i].codigo>0){
            printf("%d\n", gado[i].codigo);
        }
    }

    printf("\n\nC�DIGO DE EXCLUS�O: ");
    scanf("%d", &cod);

    for(i=0; i<numero_animais;++i){
        if(cod==gado[i].codigo){
            gado[i].codigo=0;
            gado[i].abate = FALSE;
            gado[i].alimento=0;
            gado[i].quantia_leite=0;
            gado[i].nascimento.ano=0;
            gado[i].nascimento.mes=0;

        }else {
            printf("\nCÓDIGO INVÁLIDO");
        }
    }
}
