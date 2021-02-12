//TRABALHO DE BRUNO E SAMUEL
//ESTRUTURA DE DADOS 2018.1

#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

struct arv{
  int info;
  struct arv *left, *right;
};

typedef struct arv* arv;

double depth(arv node){

	if (node = NULL)	return 0;
	else				return (1+MAX(depth(node->left),depth(node->right)));
}

int checkBalance(arv node){
	return (depth(node->right) - depth(node->left));
}

arv rotateLeft(arv node){
	arv aux = node->right;
	node->right = aux->left;
	aux->left = node;
return aux;
}

arv rotateRight(arv node){
    arv aux = node->left;
    node->left = aux->right;
	aux->right = node;
return aux;
}

arv rotateLeftRight(arv node){
	node->left = rotateLeft(node->left);
return rotateRight(node);
}

arv rotateRightLeft(arv node){
	node->right = rotateRight(node->right);
return rotateLeft(node);
}

arv insere(arv root, int val){

	if(root == NULL){
		root = (arv)malloc(sizeof(struct arv));
		root->info = val;
		root->left = root->right = NULL;
		return root;
	}

	if(val >= root->info)	root->right = insere(root->right, val);
	else					root->left = insere(root->left, val);


	//NÃO CONSEGUIMOS TERMINAR O CÓDIGO
	//MAS A IDEIA É DE QUE SEMPRE QUE HÁ UM BALANÇO IGUAL A 2 OU -2
	//ELE FAZ A DEVIDA ROTAÇÃO ATRAVÉS DA VISUALIZAÇÃO DO BALANÇO DO FILHO QUE ESTA DESBALANCEADO
	//DESSA FORMA, SE O FILHO FOR -1 OU 1 DIRÁ QUE TIPO DE ROTAÇÃO USAR

	if (checkBalance(root)==2){
		if (checkBalance(root->right)==-1)	root = rotateLeftRight(root);
		else 								root =  rotateLeft(root);

    }else if (checkBalance(root)==-2){
		if (checkBalance(root->left)==-1)	root = rotateRight(root);
		else 								root = rotateRightLeft(root);
    }


return root;
}

void imprime(arv root){

    if(root == NULL)	return;
	imprime(root->left);
	printf("%d\n", root->info);
	imprime(root->right);
}


int main(int argc, char *argv[]){

	arv root = NULL;

	int i;
	for (i=0;i<15;i++)	root = insere(root,i);
	printf("Depth = %d", depth(root));

return 0;
}
