#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) ( (a)>(b) ? (a):(b) )

struct arv{
  int info;
  struct arv *left, *right;
};

typedef struct arv *arv;

int depth(arv node){

  if(node == NULL)	    return -1;
  else					return 1+MAX(depth(node->left), depth(node->right));

}

int checkBalance(arv node){

  if(node == NULL)     return 0;
  else 				   return depth(node->left) - depth(node->right);

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

  //Caso o nó já esteja vazio, insere e retorna;
  if(root == NULL){
    root = (arv)malloc(sizeof(struct arv));
    root->info = val;
    root->left = root->right = NULL;
    return root;
  }

  //Caso contrário, insere na sub-árvore da direita ou da esquerda,
  //de acordo com o valor;
  if(val >= root->info)
    root->right = insere(root->right, val);
  else
    root->left = insere(root->left, val);

  //Confere se o fator de equilíbrio da árvore está inaceitável.
  if(checkBalance(root)==2){
    if(val>= root->left->info) //desbalanceou à esquerda, e valor é maior que o do filho da esquerda
      return rotateLeftRight(root);
    else //desbalanceou à direita, e valor é menor que o do filho da esquerda
      return rotateRight(root);
  }
  if(checkBalance(root)==-2){
    if(val < root->right->info) //Exatamente o contrário do de cima
      return rotateRightLeft(root);
    else
      return rotateLeft(root);
  }

  //Retorna o endereço do nó, se não teve que equilibrar a árvore.
  return root;
}

void imprime(arv root){

  if(root == NULL)
    return;
  imprime(root->left);
  printf("%d\n", root->info);
  imprime(root->right);

}

int main(){

  arv root = NULL;

  int i;
  for(i = 0; i<115; i++)    root = insere(root, i);

  printf("depth = %d\n", depth(root));

return 0;
}

