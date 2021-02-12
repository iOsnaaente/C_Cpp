#include <stdio.h>

char get_mantissa(char num){

  char mantissa;
  mantissa = (num & 0x0F);

  return mantissa;
}

char get_sinal(char num){

  char sinal;

	  if(num & 0x80){
		sinal = -1;
	  } else {
		sinal = 1;
	  }

  return sinal;
}


char get_expoente(char num){
  char expoente;

  expoente = (num & 0x70)>>4;

  return expoente;
}



char fp_une(char sinal, char expoente, char mantissa){//Com 3 charores para sinal, expoente e mantissa, retorna um valor em ponto flutuante.

  char num =0;

	  if(sinal == -1)
		num = 0x80;

	  num = num | ((expoente <<4) & 0x70);
	  num = num | (mantissa & 0x0F);

	  printf("%i ", num);

  return num;
}

int potencia(int n, int e)
{
  if (e > 0)
  {
    return potencia(n,e-1)*n;
  } else {
    return 1;
  }
}



float valor(char n) {//Implemente a função que calcula o valor de um núnumero real em ponto flutuante, representado em um byte

	  float c;
	  char s, m, e;
	  int p;

	  s = get_sinal(n);
	  m = get_mantissa(n);
	  e = get_expoente(n);
	  p = potencia(4,e);
	  c = (float)(s * m * p);

  return c;
}



char fp_reduz_exp(char n){// Implemente uma função que reduz o expoente em UMA unidade

	float c;
	char s, m, e, reduzido;
	int p;

	  s = get_sinal(n);
	  m = get_mantissa(n);
	  e = get_expoente(n);

	  e--;
	  m = m << 2;

	 reduzido = fp_une(s,e,m);

	return reduzido;
}



char fp_aumenta_exp(char n){ //Implemente uma função que incrementa o expoente em UMA unidade

	float c;
	char s, m, e, reduzido;
	int p;

	  s = get_sinal(n);
	  m = get_mantissa(n);
	  e = get_expoente(n);

	  e++;
	  m = m >> 2;


	 reduzido = fp_une(s,e,m);

	return reduzido;
}


char fp_soma(char n1, char n2){ //Implemente uma função que some dois números em ponto flutuante,separando as partes antes da soma.

	char s1,s2, m1, m2, e1, e2;
	char teste_e;
	char teste_s;

	  s1 = get_sinal(n1);
	  m1 = get_mantissa(n1);
	  e1 = get_expoente(n1);

	  s2 = get_sinal(n2);
	  m2 = get_mantissa(n2);
	  e2 = get_expoente(n2);


	//teste para ver a diferença entre os expoentes
	teste_e = e1 - e2;

	//Teste para comparar os sinais
	teste_s = s1 + s2;


int i;

	if (teste_e>=0){//n2 = fp_aumenta_exp(n2);	 //Poderia usar a função também com laço de rep.

		e2 = e2 + teste_e;
		m2 = m2>>(2*teste_e);

	}else{//n2 = fp_diminui_exp(n2);	 //Poderia usar a função também com laço de rep.

		e1 = e1 - teste_e;	// [ -(-n) = +n ]
		m1 = m1>>(-2*teste_e);

	}

	if (teste_s==2 || teste_s==-2){ // n1 e n2 possuem o mesmo sinal, logo se somam
		m1 = m1 + m2;
		n1 = fp_une(s1,e1,m1);


	}else{							//n1 e n2 possuem sinal diferente

		if (s1>s2){
			m1 = m1 - m2;
			n1 = fp_une(s1,e1,m1);

		}else{
			m1 = m2 - m1;
			n1 = fp_une(s1,e1,m1);

		}
	}

return n1;
}


int main(void){

  char n1 = 0xA5, n2 = 0x00;
  float v;

  //v = valor(fp_aumenta_exp(n1));
  //v = valor(fp_diminui_exp(n1));

  v = fp_soma(n1,n2);


  printf("v = %f\n", v);
  getch();

  return 0;
}
