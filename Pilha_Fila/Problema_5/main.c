#include <stdio.h>
#include <stdlib.h>

#include "Exc.2.h"

int i,j; //VARIAVEIS MUITO USADAS

void EXERCICIO_1(char *string){

	i=0;
	while (string[i]!=0){

		if (string[i]!=' '){
			if(string[i]!='*') push(string[i]);
			else printf("%c ", pop());
		}

		i++;
	}
}

long Fatorial_n(long n){

	if (n<0){
		n = n * (-1);
		return Fatorial_n(n);

	}else if (n==0)		return 1;
	else				return n*Fatorial_n(n-1);

}

long Potencia_n(long n, char exp){

	if (exp==0) 	return 1;
	else			return n*Potencia_n(n,exp-1);

}

void EXERCICIO_3(char *str){

	int banco=0;
	j=i=0;

	while (str[i]!=0){

		if (str[i]>=48 && str[i]<=57){
			push(str[i]-48);

			printf("\nNum = %d\n", str[i]-48);

			j++;;
		}

		else if (str[i]=='+')	while (order!=1)	banco += pop();
		else if (str[i]=='!') banco = Fatorial_n(banco);
		else if (str[i]=='*') while (order!=1) banco *= pop();
		else if (str[i]=='/') while (order!=1) banco /= pop();
		else if (str[i]=='-'){
			while (order!=1){
				if(j==0)	banco = pop();
				else banco-=pop();
			}
		}
		else if (str[i]=='^') j=pop(); Potencia_n(banco,j);
		i++;
	}

printf("%d", banco);


//free(stackood);  // 424 BUGANDO A VIDA 319
}

char test(char *s){

	j=0;
	while (s[j]!=0){

		if (s[j]=='{')			push(j);
		else if (s[j]=='}')	if (pop()==-1) return -1;

		if (s[j]=='[')		push(j);
		else if (s[j]==']')	if (pop()==-1) return -1;

		if (s[j]=='(')		push(j);
		else if (s[j]==')')	{if (pop()==-1) return -1;}


	j++;
	}

//	free(stackood); // 424 DANDO ERRO 319


	if (order==1)	return 0;
	else 			return -1;
}

void EXERCICIO_2(char *expr){

	if (test(expr)==-1)	printf ("\nIncorreto !\n");
	else 						printf ("\nCorreto !\n");

}


int main(){				//  LISTA DE EXERCÍCIOS 5

	stackood = malloc(4);

	char *string = "L I E B * * A F M * * * C * * *";
	EXERCICIO_1(string);	//   TIRAR BARRAS DUPLAS

	while(pop()!=-1);
	printf("\n");

	char *expr = "{2+{23[5-2*((10{2)*9}/5[6!}(3}*4]9)10])";
	EXERCICIO_2(expr);	//   TIRAR BARRAS DUPLAS

	while(pop()!=-1);
	printf("\n");

	char *str = " 2 3 + 5 - 8 2 + 2 / 5 + ";
	EXERCICIO_3(str);	//   TIRAR BARRAS DUPLAS

	while(pop()!=-1);
	printf("\n");


	stackood = 	NULL; //CONSOME TEMPO, MAS EVITA ERRO
	free(stackood);

return 0;
}




