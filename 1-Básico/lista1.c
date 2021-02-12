#include <stdio.h>
#include <stdlib.h>

int main()
{

    //CONTROLE DE REPETIÇÕES;
   int ctrl =1;
   while (ctrl <= 11){

    //SELEÇÃO DA ATIVIDADE
    puts("Selecione a atividade a ser executada: 10 atividades");
    int x;
    scanf("%i", &x);

    //EXECUÇÃO DAS ATIVIDADES 0 -> 10;
    switch (x){

    case 1:
    printf("\n\nATV 01 - Selecione um número e apresente se antecessor e antecessor.");
    printf("\nDigite um número exemplo:\n");
    int x;
    scanf("%i", &x);

    printf("\nO seu número é: %i", x);
    printf("\nO antecessor do seu número é: %i", x-1);
    printf("\nO sucessor do seu número é: %i", x+1);

    puts("\n");

break;

    case 2:
        printf("\n\nATV 02 - Faça um algoritmo que receba dois números, calcule e mostre a subtração do primeiro pelo segundo. ");
        printf("\nDigite dois números inteiros:\n");

        printf("\nDigite o primeiro número:\n");
        int numero1;
        scanf("%i", &numero1);

        printf("\nDigite o segundo número:\n");
        int numero2;
        scanf("%i", &numero2);

        printf("\nO valor do primeiro número menos o segundo número é:\n%i", numero1 - numero2);
        puts("\n");
        break;

    case 3:
        printf("\nATV 03 - Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.\n");

        printf("\nDigite 3 notas para calcular a média:\n");
        printf("\nDigite a primeira nota:\n");
        float not1;
        scanf("%f", &not1);

        printf("\nDigite a segunda nota:\n");
        float not2;
        scanf("%f", &not2);

        printf("\nDigite a terceira nota:\n");
        float not3;
        scanf("%f", &not3);

        printf("\nA média de aprovação é 7.\n");
        printf("\nA soma das notas é: %f", not1 + not2 + not3);
        float media = (not1+not2+not3) /3;
        printf("\nA média aritimética das notas é de: %f", media);
        if (media >=7){
            printf("\nAPROVADO\n");}else{
            printf("\nREPROVADO\n");}

        puts("\n");
        break;

    case 4:
        printf("\nATV 04 - Faça um algoritmo que receba quatro números inteiros, calcule e mostre a soma destes números.\n");

        printf("\nDigite 4 números inteiros para serem somados:\n");
        int a,b,c,d;

        printf("\nDigite o valor di primeiro número:\n");
        scanf("%i", &a);

        printf("\nDigite o valor di primeiro número:\n");
        scanf("%i", &b);

        printf("\nDigite o valor di primeiro número:\n");
        scanf("%i", &c);

        printf("\nDigite o valor di primeiro número:\n");
        scanf("%i", &d);

        printf("\n\nA soma dos 4 números é: %i", a+b+c+d);
        puts("\n");
        break;

    case 05:
        printf("\nATV 05 - Escrever um algoritmo para ler dois números inteiros e exibir a soma, a diferença e o produto dos mesmos. A saída deve mostrar os operandos, o operador e o resultado de cada operação.\n");

            printf("\nDigite dois números inteiros para serem calculados:\n");
            int um, dois;
            printf("\nDigite o primeiro número:\n");
            scanf("%i", &um);

            printf("\nDigite o segundo número:\n");
            scanf("%i", &dois);

            printf("\nA soma dos números é: %i", um + dois);
            puts("\n");
            printf("\nA diferença dos números é: %i", um/dois);
            puts("\n");
            printf("\nO produto dos números é: %i", um*dois);
            puts("\n");
            break;

    case 6:
        printf("\nATV 06 - Escreva um algoritmo que receba duas notas, calcule e mostre a média ponderada destas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.\n");

        printf("\nDigite duas notas, sabendo que a primeira tem peso 2 a segunda nota tem peso 3:\n");

        printf("\nDigite a primeira nota:\n");
        float nota1;
        scanf("%f", &nota1);

        printf("\nDigite a segunda nota:\n");
        float nota2;
        scanf("%f", &nota2);


        float mediaa=nota1*2+nota2*3;
        printf("\nA soma das notas com peso é de: %f", mediaa);
        printf("\nA média ponderada das notas é de:");
        printf("%f", mediaa /5);

        puts("\n");
        break;

    case 7:
        printf("\nATV 07 - Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.\n");

        printf("\nDigite o salário recebido no mês:\nR% ");
        float sal;
        scanf("%f", &sal);

        printf("\nSabendo que o salário vai sofrer um reajuste de +25 por cento no seu valor, o salário atual será de: %f", sal * 0.25 + sal);
        puts("\n");
        break;

    case 8:
        printf("\nATV 08 - Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário. \n");

        printf("\nDigite o salário atual recebido por mês:\n");
        float salario;
        scanf("%f", &salario);

        printf("\nDigite o valor de reajuste salarial:\n");
        float reajuste;
        scanf("%f", &reajuste);

        printf("\nO valor  salarial reajustado é de: %f", salario * (reajuste/100) + salario);
        puts("\n");
        break;

    case 9:
        printf("\nATV 09 - Faça um algoritmo que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% sobre o salário base.\n");

        printf("\nDigite o salário base recebido:\n");
        float base;
        scanf("%f", &base);

        printf("\nGratificação de 5 por cento ao salário base: %f", base * 0.05);
        printf("\nImposto de 7 por cento no salário base: %f", base * 0.07);

        printf("\nO salário total recebido é de: %f", base + base*0.05 - base * 0.07);
        puts("\n");
        break;

    case 10:
        printf("\nATV 10 - Faça um algoritmo que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.\n");

        printf("\nDigite o valor do deposito efetuado: ");
        float deposito;
        scanf("%f", &deposito);

        printf("\nDigite o valor da taxa atual de juros: ");
        float taxa;
        scanf("%f", &taxa);

        printf("\nVocê terá um rendimento de: %f", deposito*taxa/100);
        printf("\nVocê receberá no depósito, um total de: %f", deposito*taxa/100 + deposito);

        puts("\n");
        break;

    default:
        break;
    }

      ++ctrl;}
    return 0;
}
