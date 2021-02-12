#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A)
struct Tmoto {

  int ano;

  char modelo[80];
  char marca[80];
  char cor[80];

  float preco;

};



int main() {


    // B)
    int N;
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    struct Tmoto *Motomoto;

    Motomoto = (struct Tmoto *) malloc ( N * sizeof( struct Tmoto ) );

    int i;
    for (i=0; i<N; i++){
        printf("\nAno da moto %d", i+1);
        scanf("%d", &Motomoto[i].ano );

        printf("\nModelo da moto %d", i+1);
        scanf("%s", &Motomoto[i].modelo );

        printf("\nMarca da moto %d", i);
        scanf("%s", &Motomoto[i].marca );

        printf("\nCor da moto %d", i);
        scanf("%s", &Motomoto[i].cor );

        printf("\nPreco da moto %d", i);
        scanf("%f", &Motomoto[i].preco );

        printf("\n\n");
    }

    // C)
    printf("\n\nÉ amanhã, só até amanhã, 10% para todas as motos Brancas da loja MotoMoto");
    for ( i=0; i<N; i++){
        if ( strcmp( Motomoto[i].cor, "Branco" ) == 0) {
            Motomoto[i].preco = Motomoto[i].preco*0.9;
        }
    }


    // D)
    printf("\n\nLiquida total para todas as motos fabricadas até 2010. Segue a lista dos monstros!!");
    for ( i=0; i<N; i++){
        if ( Motomoto[i].ano <= 2010 ){

            printf("\nMoto do marca %s", Motomoto[i].marca );
            printf("\nModelo %s", Motomoto[i].modelo );
            printf("\nCom a cor %s ", Motomoto[i].cor);
            printf("\nFabricada no ano %d ", Motomoto[i].ano);
            printf("\nNa pechincha de %f ", Motomoto[i].preco);
            printf("\n\n ");
        }
    }


  return 0;
}










