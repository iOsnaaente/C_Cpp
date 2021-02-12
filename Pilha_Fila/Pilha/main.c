#include <stdio.h>
#include <stdlib.h>

#define TAM_PILHA 100

int pilha[TAM_PILHA];
int topo =0 ;


void push(int v){
    pilha[topo]=v;
    topo++;
}

int pop(){
    topo--;
    return pilha[topo];
}

void imprime(char* s, int in, int fin){
    int i;

    for (i=in;i<=fin;i++){
        printf("%c", s[i]);
    }
    printf("\n");
}

void subString(char* s){

    int j=0, in, fin;

    while(s[j]!=0){

        if (s[j]=='('){
            push(j);
        }else if (s[j]==')'){
            fin = j;
            in = pop();
            imprime(s, in, fin);
        }

        j++;
    }
}

int main(void){

    topo = 0;

    char* string = "(12(a(234)(v(c)))32)\0";

    subString(string);

    return 0;
}
