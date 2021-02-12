
#include <stdio.h>
#include <stdlib.h>


#define 				BRUNO_GABRIEL_FLORES_SAMPAIO

//						BRUNO_GABRIEL_FLORES_SAMPAIO



int main (void)
{

printf("\nLISTA 04 - ");

printf("ATV 01 - ");

	int i = 0;
    int num;

    do {
        printf("\nDigite um número qualquer: [Para sair, digite -999]\n");

        scanf("%d", &num);

        if(num!=-999){
        printf("\nO triplo do número digitado é: %i", num*3);
        }

    }while(num!=-999);

printf("\nPrecione alguma tecla para prosseguir.");
getch();
printf("\n//////////////////////////////////////////////////////////////////\n");

    printf("\nATV 02 - ");

    printf("\nDigite [N] números inteiros para serem lidos: [Quando quiser encerrar o programa, digite [0]]");

    int par = 0;
    int impar = 0;

    do {
        printf("\nDigite um número:");

        scanf("%d", &num);

        if (num%2==0 && num!=0){
            printf("\nO número [N] é par.");
            ++ par;
        }else if (num %2 ==1){
            printf("\nO número [N] é impar.");
            ++impar;
        }

    } while (num!=0);

    printf("\nExistem %d Numeros par e %d Numeros impares.\n", par, impar);



printf("\nPrecione alguma tecla para prosseguir.");
getch();
printf("\n//////////////////////////////////////////////////////////////////\n");


    printf("\nATV 03 - ");

	printf("\nDigite numeros inteiros pares e impares:");


	par =0;
	impar=0;
	int contPar=0;
	int contImpar =0;
	int bancP=0, bancI;


	do{	scanf("%i", &num);

		if(num>0){

		if (num%2==0){
			par = num + par;

			if(num >= bancP){bancP = num;}

			printf("\nO numero digitado é PAR:\n");
				++contPar;

		}else{
			impar += num;

			if (num <= bancI){bancI = num;}

			printf("\nO numero digitado é IMPAR:\n");
				++contImpar;
			}

		}

	}while(num>=0);


printf("\nValor dos IMPARES: %i \nValor dos PARES: %i", impar, par);
printf("\nA media dos IMPARES é: %i \nA media dos PARES é: %i " , impar/contImpar, par/contPar);

printf("\nO MAIOR NUMERO PAR É: %i", bancP);
printf("\nO MENOR NUMERO IMPAR É: %i", bancI);



printf("\nPrecione alguma tecla para prosseguir.");
getch();
printf("\n//////////////////////////////////////////////////////////////////\n");

printf("\nATV 04 - ");


//ENTRADA DE DADOS
int idCliente;
int compras;
int desconto;

//PROCESSAMENTO

do{

printf("\nDigite o código do cliente:\n");

scanf("%i", &idCliente);

if (idCliente !=0){
printf("\nDigite o valor gasto pelo cliente no ano passado:\n");

printf("R$"); scanf("%i", &compras);

if (compras<=0){

	break;

	}else if (compras<=1000){
		desconto = 10;
		}else
			{desconto = 15; }

printf("\nO valor de desconto do cliente %i é de: %i", idCliente, desconto);
printf("\nPara encerrar o programa digite [0]\n");
}

}while (idCliente !=0);


printf("\nPrecione alguma tecla para prosseguir.");
getch();
printf("\n//////////////////////////////////////////////////////////////////\n");

printf("ATV 05 - ");

int sexo, Mulher, Homem;
int idade;
int somaIdadeMulheres;

do{
printf("\nDigite o sexo de uma pessoa:\n[0]Mulher\n[1]Homem\n");
scanf("%i", &sexo);
printf("\nDigite a idade dessa pessoa: Para encerrar, digite um número negativo ou nulo.\n");
scanf("%i", &idade);

if(idade>0){
if (sexo ==0 ) {
		++Mulher;
		if ( idade >=30 && idade <= 45){
			idade += somaIdadeMulheres;
			}
		} else{

		++Homem;
		}
}
} while (idade >0);

	printf("\nA media de idade das mulheres entre 30 e 45 anos é de:");
	printf("%i", somaIdadeMulheres/Mulher);
	printf("\n\nO numero total de homens é de: %i", Homem);



printf("\nPrecione alguma tecla para prosseguir.");
getch();
printf("\n//////////////////////////////////////////////////////////////////\n");



printf("\nATV 06 - ");

num =0;
idade=0;
int nota, medIdade;
int Bom, Otimo, Regular, Ruim, Pessimo;


Otimo = Bom = Regular = Ruim = Pessimo = 1;


do{
printf("\nDigite a sua idade:");
	scanf("%i", &idade);
printf("\nDigite a sua opinião a respeito ao filme:\n[1]Ótimo\n[2]Péssimo\n[3]Ruim\n[4]Regular\n[5]Bom\n");

scanf("%i", &nota);


switch (nota){

case 1:
	++Otimo;
	break;
case 2:
	++Pessimo;
	break;
case 3:
	++Ruim;
	medIdade+= idade;
	break;
case 4:
	++Regular;
	break;
case 5:
	++Bom;
	break;
}


printf("\nOtimos: %i .", Otimo -1 );
printf("\nDiferença percentual entre Bom e Regular: %i .", ((Bom -1) /100) - ((Regular-1)/100));
printf("\nA media de idade de pessoas que responderam Ruim: %i .", medIdade/(Ruim) );
printf("\nA porcentagem de notas Pessimo: %i por cento.", ((Pessimo) / (Otimo+Bom+Regular+Ruim+Pessimo)-5 ));

++num;
}while(num<100);







	return 0;

	}




