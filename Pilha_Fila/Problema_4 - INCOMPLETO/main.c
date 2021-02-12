#include <stdio.h>
#include <stdlib.h>

	int i,j;
	char PIL1[8], ordem1=0;
	char PIL2[8], ordem2=0;
	char PIL3[8], ordem3=0;


void push(char n, char arg){


	if (arg==1) {
		PIL1[ordem1]=n;
		ordem1++;
	}
	else if(arg==2){
		PIL2[ordem2]=n;
		ordem2++;

	}
	else if (arg==3){
		PIL3[ordem3]=n;
		ordem3++;
	}
}

char pop(char arg){

	if (arg==1) {

		if (ordem1!=0){
			ordem1--;
			return PIL1[ordem1];

		}else printf("\n~~PILHA NULL~~");
	}

	else if(arg==2){

		if (ordem2!=0){
			ordem2--;
			return PIL2[ordem2];

		}else printf("\n~~PILHA NULL~~");
	}

	else if (arg==3){

		if (ordem3!=0){
			ordem3--;
			return PIL3[ordem3];

		}else printf("\n~~PILHA NULL~~");
	}

}


int main(){

	for (i=0;i<8;i++){
		push(i+1,1);
	}

    return 0;
}
