#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n\nATV 01 - ");

    struct ponto2d{
        float X;
        float Y;
    };

    struct ponto2d ponto_inicial;
    struct ponto2d ponto_final;

    printf("\nDigite os pontos das coordenadas (X,Y) iniciais\n");
    scanf ("%f", &ponto_inicial.X);
    scanf ("%f", &ponto_inicial.Y);


    printf("\nDigite os pontos das coordenadas (X,Y) finais\n");
    scanf ("%f", &ponto_final.X);
    scanf ("%f", &ponto_final.Y);

    printf ("\nAs coordenas iniciais s�o (%.2f . %.2f)\nAs coordenadas finais s�o (%.2f . %.2f)\n", ponto_inicial.X , ponto_inicial.Y, ponto_final.X , ponto_final.Y);

    printf("\nA dist�ncia entre os pontos �: %f", sqrt(pow((ponto_inicial.X - ponto_final.X),2)+pow(ponto_final.Y - ponto_final.Y,2) ) );


    printf("\n///////////////////////////////////////////\n");
    getch();

    return 0;
}
