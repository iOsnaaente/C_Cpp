
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//CONTROLE DE REPETIÇÕES - 6 REPETIÇÕES;

int ctrl = 1;
while (ctrl <=6) //AO FINAL DO CICLO ELE ADD MAIS 1 AO CTRL [LINHA 167];
	{
		//SELEÇÃO DA ATIVIDADE ENTRE 0 E 5;

    printf("Digite a atividade a selecionar: 5 atividades\n");
    int x;
    scanf("%d", &x);
    switch(x){


        case 1:

   puts("\nATV 01 - vamos dar quantos anos uma pessoa tem a partir da sua idade - meses, semanas e dias");
puts("Digite a sua data de nascimento dd/mm/aaaa");
int ano;
int mes;
int dia;
puts("\nDia:");
   scanf("%d", &dia);
   puts("\nMês:");
   scanf("%d", &mes);
   puts("\nAno:");
   scanf("%d", &ano);

   puts("\n\nAgora digite a data atual dd/mm/aaaa");

int anoA;
int mesA;
int diaA;
puts("\nDia:");
   scanf("%d", &diaA);
   puts("\nMês:");
   scanf("%d", &mesA);
   puts("\nAno:");
   scanf("%d", &anoA);


puts("\n\nVocê possui:");
printf("%d", anoA - ano);printf(" anos.");
printf("%d", mesA - mes); printf(" meses.");
printf("%d", diaA - dia); printf(" dias.");

puts("\nTotalizando:");
printf("%d", anoA-ano); printf(" anos.\n");
printf("%d", (anoA-ano) * 12); printf(" meses.\n");

int dias = (anoA-ano) *365 + (mesA-mes) * 30 + dia;
printf("%d", dias); printf(" dias.\n\n");
printf("%d", dias/7); printf(" semanas.\n\n");

    break;

        case 2:
            //calcular o volume de uma lata dado por PIr^2.h

        puts("\nATV 02 - Vamos calcular o volume de uma lata cilindrica.\nPara isso, digite os valores das latas em metros:");

        float r;
        float h;
        float pi = 3.14;
        puts("Digite o Raio da lata:");
    scanf("%f", &r);

    puts("\nDigite a altura da lata:");
    scanf("%f", &h);

    puts("\n\nO raio e a altura da lata correspondem a:");
    printf("%f", r);printf(" metros de Raio.\n");
    printf("%f", h); printf(" metros de Altura.\n");


    puts("\n\nEntão o volume da lata é de: ");
printf("%f", pi * (r*r)*h);printf(" m^3 .");

puts("\n\nCom Pi = 3,14");
break;
        case 3:
            puts("\nATV 03 - Faça um algoritmo que leia o código de um piloto, uma distância percorrida em km e o tempo que o piloto levou para percorrê-la (em horas). O programa deve calcular a velocidade média - ​Velocidade = Distância / Tempo ​- em km/h, e exibir a seguinte frase:\nA velocidade média do <código do piloto> foi <velocidade media calculada> km/h. ");

           //Coleta de dados;
           int codPiloto;
           float distanciaPercorrida, tempo;
            puts("Insira o código do Piloto solicitado:\n");
            scanf("%i", &codPiloto);
            puts("\nInsira a distância percorrida pelo Piloto em km:\n");
            scanf("%f", &distanciaPercorrida);
            puts("\nInsira o tempo decorrido pelo Piloto em segundos:\n");
            scanf("%f", &tempo);

            //Prints
            printf("\n\nO código do Piloto é: %i", codPiloto);
            printf("\nA distância percorrida pelo Piloto foi de: %f", distanciaPercorrida);printf(" KM.");
            printf("\nO tempo deccorido pelo Piloto foi de: %f", tempo); printf(" s.");

            //calcular dados
           float hora = tempo / 3600;
           float velocidade;
           velocidade = distanciaPercorrida / hora;
            printf("\n\nA velocidade média do Piloto %i", codPiloto); printf(" foi de: %f", velocidade);
           printf(" KM/H.\n\n");
    break;

        case 4:
            puts("\nATV 04 - O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um algoritmo que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. \nCalcule e mostre:");
            puts("\na) O valor correspondente ao lucro do distribuidor;\nb) O valor correspondente aos impostos;\nc) O preço final do veículo.");

            //Coleta de dados
            puts("");
            float precoFabrica;
            float taxa1 = 0.02;
            float taxa2 = 0.05;
           puts("Digite o preço de fábrica do carro:\n");
           scanf("%f", &precoFabrica);

           puts("Sabendo que ao sair da fábrica, o carro sofre um acréscimo de 2% em seu valor e o ser vendido, a distribuidora ganha 5% do seu valor como bonificação:");
           puts("O lucro da distribuidora é igual a:\n");

            float custo = precoFabrica * taxa1 + precoFabrica;
           float lucro = precoFabrica * taxa2 + precoFabrica - custo;

           printf("\nO lucro da distribuidora é: %f", lucro);

           printf("\nO valor pago em impostos ao retirar da fábrica é de: %f", precoFabrica * taxa1);

           printf("\nO preço final do veiculo é: %f", custo + lucro);

           puts("\n");

            break;

        case 5:
            puts("\nATV 05 - Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escreva um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido.  Calcule e escreva o salário final do vendedor");

            //coleta de dados;
            float salario;
            float numCarroVendido;
            float vendas;
            float taxa = 0.7;


            puts("\nEscreva o valor do salário recebido:\n");
            scanf("%f", &salario);

            puts("\nDigite o número de carros vendidos no mês:\n");
            scanf("%f", &numCarroVendido);

            puts("\nDigite o número total de vendas no mês:\n");
            scanf("%f", &vendas);

            printf("\n\nVocê recebe um salário fixo no mês de: %f", salario);printf(".\nMais a comissão de 7% do salário a cada carro vendido.\nMais 5% do valor das vendas efetuadas.");
            printf("\n\nVocê recebe :%f", numCarroVendido * 0.07 * salario);printf(" de comissão pelos carros vendidos.");
            printf("\nVocê recebe :%f", vendas * 0.05);printf(" de comissão pelas vendas efetuadas.");
            printf("\nVocê recebe no total, por mês: %f", (salario)+(vendas * 0.05)+(0.07 * salario * numCarroVendido ));

            break;

    }
    ++ctrl;
}
    return 0;
}
