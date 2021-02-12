#include <stdio.h>
#include <stdlib.h>

unsigned int i,j,k;

void troca_n1_n2(int *u, int *v){

	int aux;

	aux = *u;
	*u = *v;
	*v = aux;

}

int *Boubble_sort(int *lista){

	i=0;
	while (lista[i]!=-1)	i++;

	int tam = i;

	for (i=0;i<tam;i++){
		for (j=1;j<tam-i;j++){
			if (lista[j]>lista[j+1])	troca_n1_n2(&lista[j], &lista[j+1]);
		}
	}

return lista;
}


int Value_max(int *lista){

	j=0;
	while (lista[j]!=-1)	j++;

	int tam = j, aux;

	for (j=0;j<tam;j++){
		if (j==0)	aux = lista[j];
		else if (lista[j] > aux)	aux = lista[j];
	}

return aux;
}

int Read_lines(FILE *f){

	i=j=0;
	fseek(f,0,0);
	while (s[i]!='\0')	i=++;
	fseek(f,0,0);

return j+1;
}

int *Read_chars_line(FILE *f){

	int chars, *lines;

	lines = malloc((Read_lines(f)+1)*sizeof(int));
	i=j=0;
	fseek(f,0,0);

	while ((chars=fgetc(f))!=EOF){

		if(chars!='\n')	j++;
		else{
			lines[i] = j;
			i++;
			j=0;
		}
	}
	lines[i]=-1;

fseek(f,0,0);
return lines;
}

/*int **Ret_Lines_Colunas(FILE *f ,int **matriz){

	int *col, lin, aux, chars;

	lin = Read_lines(f);
	col = Read_chars_line(f);
	aux = Value_max(col);

	matriz = (int*)malloc(lin* sizeof(int *));
    for (i=0;i<lin;i++)    matriz[i] = malloc ((aux+1)*sizeof(int));

	j=i=0;
	fseek(f, 0, 0);
	while ((chars=fgetc(f))!= EOF){

		if(chars!='\n'){

			matriz[i][j]=chars;
			j++;

		}else{
			i++;
			j=0;
		}
	}




fseek(f,0,0);
return matriz;
}
*/

char ***aloca_matriz(FILE *f,char ***matriz){

	char *col, lin, aux, in=2;

	lin = Read_lines(f);
	col = Read_chars_line(f);
	aux = Value_max(col);

	matriz = (char**)malloc(lin* sizeof(char **));
    for (i=0;i<lin;i++){
		matriz[i] = (int*)malloc (in*sizeof(char*));
		for (j=0;j<in;j++){
			if (j==0)	matriz[i][j] = malloc(aux*sizeof(char));
			else if (j==1)	matriz[i][j] = malloc(5*sizeof(char));
		}
    }
return matriz;
}

char ***Ret_Lines_Colunass(FILE *f ,char ***matriz){

	char chars;
	matriz = aloca_matriz(f,matriz);


	j=i=k=0;
	fseek(f, 0, 0);
	while ((chars=fgetc(f))!= EOF){

		if(chars!='\n'){

				if (chars!=',')	matriz[i][k][j]=chars;
				else 			k=1;

				j++;

		}else{	i++;	j=0;	k=0;	}

	}


fseek(f,0,0);
return matriz;
}

void ImprimeMatriz(FILE *f, int ***matriz){

	int *char_max = Read_chars_line(f), aux=Value_max(char_max), lin=Read_lines(f);

	for (i=0;i<lin;i++){
			for(j=0;j<2;j++){
				if (j==0)	for (k=0;k<aux;k++)	printf("%c", matriz[i][j][k]);
				else 		for (k=0;k<5;k++)	printf("%c", matriz[i][j][k]);
			}
		printf("\n");
		}
}

void ImprimeMatriz_line_specific(FILE *f, int ***matriz, int num_line, int nome_1_altura_2){

	int *char_max = Read_chars_line(f), aux=Value_max(char_max), lin=Read_lines(f);

	for (i=0;i<lin;i++)	{
		if (i==num_line){
				if (nome_1_altura_2==1)	for (k=0;k<aux;k++)	printf("%d", matriz[i][0][k]);
				else if (nome_1_altura_2==2) for (k=0;k<5;k++)	printf("%c", matriz[i][1][k]);
			}
		}
	}


int main(){
	FILE *f;
	f = fopen("NOMES.txt", "r");

	char **matriz;

	matriz = Ret_Lines_Colunass(f, matriz);

	ImprimeMatriz(f,matriz);


fclose(f);
return 0;
}
