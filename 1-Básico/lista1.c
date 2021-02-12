#include <stdio.h>
#include <stdlib.h>

int main()
{

    //CONTROLE DE REPETI��ES;
   int ctrl =1;
   while (ctrl <= 11){

    //SELE��O DA ATIVIDADE
    puts("Selecione a atividade a ser executada: 10 atividades");
    int x;
    scanf("%i", &x);

    //EXECU��O DAS ATIVIDADES 0 -> 10;
    switch (x){

    case 1:
    printf("\n\nATV 01 - Selecione um n�mero e apresente se antecessor e antecessor.");
    printf("\nDigite um n�mero exemplo:\n");
    int x;
    scanf("%i", &x);

    printf("\nO seu n�mero �: %i", x);
    printf("\nO antecessor do seu n�mero �: %i", x-1);
    printf("\nO sucessor do seu n�mero �: %i", x+1);

    puts("\n");

break;

    case 2:
        printf("\n\nATV 02 - Fa�a um algoritmo que receba dois n�meros, calcule e mostre a subtra��o do primeiro pelo segundo. ");
        printf("\nDigite dois n�meros inteiros:\n");

        printf("\nDigite o primeiro n�mero:\n");
        int numero1;
        scanf("%i", &numero1);

        printf("\nDigite o segundo n�mero:\n");
        int numero2;
        scanf("%i", &numero2);

        printf("\nO valor do primeiro n�mero menos o segundo n�mero �:\n%i", numero1 - numero2);
        puts("\n");
        break;

    case 3:
        printf("\nATV 03 - Fa�a um algoritmo que receba tr�s notas, calcule e mostre a m�dia aritm�tica entre elas.\n");

        printf("\nDigite 3 notas para calcular a m�dia:\n");
        printf("\nDigite a primeira nota:\n");
        float not1;
        scanf("%f", &not1);

        printf("\nDigite a segunda nota:\n");
        float not2;
        scanf("%f", &not2);

        printf("\nDigite a terceira nota:\n");
        float not3;
        scanf("%f", &not3);

        printf("\nA m�dia de aprova��o � 7.\n");
        printf("\nA soma das notas �: %f", not1 + not2 + not3);
        float media = (not1+not2+not3) /3;
        printf("\nA m�dia aritim�tica das notas � de: %f", media);
        if (media >=7){
            printf("\nAPROVADO\n");}else{
            printf("\nREPROVADO\n");}

        puts("\n");
        break;

    case 4:
        printf("\nATV 04 - Fa�a um algoritmo que receba quatro n�meros inteiros, calcule e mostre a soma destes n�meros.\n");

        printf("\nDigite 4 n�meros inteiros para serem somados:\n");
        int a,b,c,d;

        printf("\nDigite o valor di primeiro n�mero:\n");
        scanf("%i", &a);

        printf("\nDigite o valor di primeiro n�mero:\n");
        scanf("%i", &b);

        printf("\nDigite o valor di primeiro n�mero:\n");
        scanf("%i", &c);

        printf("\nDigite o valor di primeiro n�mero:\n");
        scanf("%i", &d);

        printf("\n\nA soma dos 4 n�meros �: %i", a+b+c+d);
        puts("\n");
        break;

    case 05:
        printf("\nATV 05 - Escrever um algoritmo para ler dois n�meros inteiros e exibir a soma, a diferen�a e o produto dos mesmos. A sa�da deve mostrar os operandos, o operador e o resultado de cada opera��o.\n");

            printf("\nDigite dois n�meros inteiros para serem calculados:\n");
            int um, dois;
            printf("\nDigite o primeiro n�mero:\n");
            scanf("%i", &um);

            printf("\nDigite o segundo n�mero:\n");
            scanf("%i", &dois);

            printf("\nA soma dos n�meros �: %i", um + dois);
            puts("\n");
            printf("\nA diferen�a dos n�meros �: %i", um/dois);
            puts("\n");
            printf("\nO produto dos n�meros �: %i", um*dois);
            puts("\n");
            break;

    case 6:
        printf("\nATV 06 - Escreva um algoritmo que receba duas notas, calcule e mostre a m�dia ponderada destas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.\n");

        printf("\nDigite duas notas, sabendo que a primeira tem peso 2 a segunda nota tem peso 3:\n");

        printf("\nDigite a primeira nota:\n");
        float nota1;
        scanf("%f", &nota1);

        printf("\nDigite a segunda nota:\n");
        float nota2;
        scanf("%f", &nota2);


        float mediaa=nota1*2+nota2*3;
        printf("\nA soma das notas com peso � de: %f", mediaa);
        printf("\nA m�dia ponderada das notas � de:");
        printf("%f", mediaa /5);

        puts("\n");
        break;

    case 7:
        printf("\nATV 07 - Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.\n");

        printf("\nDigite o sal�rio recebido no m�s:\nR% ");
        float sal;
        scanf("%f", &sal);

        printf("\nSabendo que o sal�rio vai sofrer um reajuste de +25 por cento no seu valor, o sal�rio atual ser� de: %f", sal * 0.25 + sal);
        puts("\n");
        break;

    case 8:
        printf("\nATV 08 - Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o percentual de reajuste. Calcular e escrever o valor do novo sal�rio. \n");

        printf("\nDigite o sal�rio atual recebido por m�s:\n");
        float salario;
        scanf("%f", &salario);

        printf("\nDigite o valor de reajuste salarial:\n");
        float reajuste;
        scanf("%f", &reajuste);

        printf("\nO valor  salarial reajustado � de: %f", salario * (reajuste/100) + salario);
        puts("\n");
        break;

    case 9:
        printf("\nATV 09 - Fa�a um algoritmo que receba o sal�rio-base de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% sobre o sal�rio base.\n");

        printf("\nDigite o sal�rio base recebido:\n");
        float base;
        scanf("%f", &base);

        printf("\nGratifica��o de 5 por cento ao sal�rio base: %f", base * 0.05);
        printf("\nImposto de 7 por cento no sal�rio base: %f", base * 0.07);

        printf("\nO sal�rio total recebido � de: %f", base + base*0.05 - base * 0.07);
        puts("\n");
        break;

    case 10:
        printf("\nATV 10 - Fa�a um algoritmo que receba o valor de um dep�sito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.\n");

        printf("\nDigite o valor do deposito efetuado: ");
        float deposito;
        scanf("%f", &deposito);

        printf("\nDigite o valor da taxa atual de juros: ");
        float taxa;
        scanf("%f", &taxa);

        printf("\nVoc� ter� um rendimento de: %f", deposito*taxa/100);
        printf("\nVoc� receber� no dep�sito, um total de: %f", deposito*taxa/100 + deposito);

        puts("\n");
        break;

    default:
        break;
    }

      ++ctrl;}
    return 0;
}
