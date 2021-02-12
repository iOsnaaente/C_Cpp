#include <stdio.h>
#include <stdlib.h>


int data[150];				//GUARDAR OS NÓS DA ARVORE
unsigned int i,j;

void init_arv(){
	for (i=0;i<150;i++)	data[i]=-1;
}

int leftChild(int node){
	return 2*node+1;
}
int rightChild(int node){
	return 2*node+2;
}

void save_number(int root, int number){

	if (data[root]==-1)	data[root] = number;
	else{
		if(number>data[root])	save_number(rightChild(root), number);
		else 					save_number(leftChild(root),  number);
	}
}

void show(int node){

	if (data[node]!=-1){

		show(rightChild(node));
		printf("%d,", data[node] );
		show(leftChild(node));
	}
}


int main(){

	init_arv();

	save_number(0,41);
	save_number(0,27);
	save_number(0,81);
	save_number(0,7);
	save_number(0,38);
	save_number(0,67);
	save_number(0,84);
	save_number(0,3);
	save_number(0,11);
	save_number(0,33);
	save_number(0,62);
	save_number(0,82);
	save_number(0,92);

	printf("\n\n");

	show(0);

	printf("\n\n");

return 0;
}
