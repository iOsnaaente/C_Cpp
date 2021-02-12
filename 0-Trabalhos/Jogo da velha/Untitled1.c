#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define FALSE 0
#define TRUE 1
#include <time.h>

int main(){

srand(time(NULL));
    int i;
    printf("intervalo da rand: [0,%d]\n", rand()%10);



return 0;
}

