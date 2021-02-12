#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void Ordem(int a, int b, int c){

	if (a >= b && a >= c && b >= c){
		printf("%d > %d > %d",a,b,c);
	}
	else if (a >= b && a >= c && c >= b){
		printf("%d > %d > %d",a,c,b);
	}
	else if (b >= a && b >= c && a >= c){
		printf("%d > %d > %d",b,a,c);
	}
	else if (b >= a && b >= c && c >= a){
		printf("%d > %d > %d",b,c,a);
	}
	else if (c >= a && c >= b && a >= b){
		printf("%d > %d > %d",c,a,b);
	}
	else if (c >= a && c >= b && b >= a){
		printf("%d > %d > %d",c,b,a);
	}

}

void media(float A, float B, float C){

	float mediaDosTres = (A+B+C)/3;

	printf("\nA média dos três valores eh de %f", mediaDosTres);

}

void somaDigitos(int nume){

	int banco=0;
	int aux;

	while (nume!=0){

		aux = nume%10;

		banco += aux;

		nume = nume - aux;
		nume = nume / 10;

	}

	printf("\nA soma dos D�gitos do numero %d � igual a %d", nume,banco);

}

int ChamaCaracteristica(int MILL){

	int primeiro, segundo, soma1_2, quadrado1_2;

	segundo = MILL % 100;
	primeiro = (MILL - segundo) /100;

	//printf("Dividindo o n�mero em dois, temos %d e %d.", primeiro, segundo);

	soma1_2 = primeiro + segundo;
	//printf("\nA soma dos dois n�meros � de %d.", soma1_2);
	quadrado1_2 = soma1_2 *soma1_2;
	//printf("\nElevando ao quadrado temos %d.\n", quadrado1_2);


	if (quadrado1_2 == MILL){
		printf("Dividindo o n�mero em dois, temos %d e %d.", primeiro, segundo);
		printf("\nEsse n�mero possui essa caracteristica.\n\n");

		return 0;
	} 	else {
			//printf("\nEsse n�mero N�O possui essa caracteristica.\n");
			return 1;
		}
}


int main(){

	printf(" 	BRUNO GABRIEL FLORES SAMPAIO		\n\n");
	printf("\nATV 02 - ");

	int A, B, C;

    printf("Digite 3 valores:\n");
    scanf("%d %d %d", &A, &B, &C);

    Ordem (A,B,C);


    getch();
    printf("\nATV 03 - ");

    float num1, num2, num3;

    printf("\nDê entrada em 3 números:\n");
    scanf("%f%f%f", &num1, &num2, &num3);

    media(num1, num2,num3);


	getch();
    printf("\nATV 04 - \n");

    int Int;
    printf("\nDigite um n�mero inteiro para serem somados os seus d�gitos:\n");

    scanf("%d", &Int);

    somaDigitos(Int);



	getch();
    printf("\nATV 05 - ");

	printf("\n\nDigite um n�mero entre 1000 e 9999 para verificar se esse n�mero apresenta ou n�o essa caracteristica:\n");

	int MILL;
	//FOR PARA PODER ENCONTRAR TODOS OS N�MEROS
	for (MILL=1000; MILL<=9999; MILL++){
		//printf("%d\n", MILL);
		ChamaCaracteristica(MILL);
	}

return 0;
}
