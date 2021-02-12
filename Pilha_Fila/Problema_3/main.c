#include <stdio.h>
#include <stdlib.h>

int main(){

	char str[123] = "abcdefghijklmnopqrstuvxwzyABCDEFGHIJKLMNOPQRSTUVWYXZÁáÊ´´[]{}ç{^}";

	gets(str);

	int dif = 'A' - 'a', i=0;

	printf("\n");

	while (str[i]!=0){

		if (str[i]>=97 && str[i]<=122) 		printf("%c", str[i]+dif);
		else if (str[i]>=65 && str[i]<90) 	printf("%c", str[i]-dif);
		else					printf("%c", str[i]);

		i++;
	}

	printf("\n");

    return 0;
}
