#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BRUNO_GABRIEL_FLORES_SAMPAIO 12


int readWords(FILE *f, char *s){

}



int main()
{

	int Quant;
	FILE *Words;
	Words = fopen("ATV_01.txt", "w");

	fprintf(Words, "Atividade 01;\nEscreva uma função int​ ​readWords(FILE​ ​*f,char*​ ​s)​ que recebe como entrada um arquivo texto contendo um texto em português, armazena as palavras encontradas na string s e retorna o número total de palavras lidas.");

	fclose(Words);


	readWords(Words, Quant);



    return 0;
}
