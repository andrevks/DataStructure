#include <stdio.h>
#include <stdlib.h>


#define fnt " %d"//Definição do formato de exibição

typedef int Item;//Tipo dos itens na lista

typedef struct no{

	Item item;
	struct no *prox;

}*lista;//tipo do ponteiro para listas

//declaração de funções e subrotinas
lista no(Item x, lista p);
void exibir(lista p);
void destruir(lista *L);

//funções recursivas
bool tamanho(lista L);
bool pert(Item x,lista L);
lista clone(lista L);

//funções de lista ordenada
void ins(Item x, lista *L);
void rem(Item x, lista *L);
bool em(Item x,lista );
//exercícios
void exibirInv(lista L);
void insM(Item x, lista *L);

int main()
{
	lista I,K;
	int x;

	//ex3
	//criando a lista de maneira simples
	// I = no(5,NULL);//O primeiro ponteiro deve conter o primeiro elem
	// 			   //E o endereço NULL.
	// I = no(1,I);//a cada iteração há o retorno de um novo endereço
	// I = no(3,I);

	// //outra maneira seria:
	// // I = no(3,no(1,no(5,NULL)))
	
	// printf("\n");
	// exibir(I);


	// printf("\n");
	// exibirInv(I);
	//até aqui é o exercício 3

	// tamanho(I);
	// printf("\nVerificar número na lista: \n");
	// 	scanf(" %d", &x);

	// //comando condicional terciário
	// printf(pert(x,I)? "existe": "não existe");

	// printf("\n\n");
	// K = clone(I);

	// exibir(K);

	 K = no(45, NULL);	

	// printf("\n>>>>>\n");
	// exibir(K);

	 insM(1,&K);

	 insM(10,&K);

	 insM(0,&K);
	
	 insM(2,&K);


	 exibir(K);

	// printf(em(2,K)? "Existe": "Não existe");

	//rem(2,&K);

	//exibir(K);	





return 0;
}

//construir um lista 
lista no(Item x, lista p){

	lista n = (lista) malloc(sizeof(struct no));

	n->item = x;
	n->prox = p;

	return n;//retorna n 
}

void exibir(lista I){

	if(I != NULL){
		while(I !=NULL){

			//fnc é "%d"
			//Acessamos o I e o item(valor/número)	
			printf(fnt,I->item);
			printf("\n");

			I = I->prox;
			//printf(" I = %p ", I);
		}

	}else{

		printf("\n Oh no!, lista vazia\n");
	}
}

//passando uma lista por refência, mesmo ela sendo um ponteiro
void destruir(lista *L){

	while(*L != NULL){
		//ponteiro para ponteiro, o dado contido em "*L" é um endereço
		lista n = *L;
		*L = n->prox;
		free(n);
	}

}
//funções recursivas

//contar para saber o tamanho
bool tamanho(lista L){

	if(L == NULL){
		return false;
	}else{
		return 1 + tamanho(L->prox);
	}
}
//verificar a existência de um item na lista
bool pert(Item x, lista L){
	if(L == NULL)
		return false;

	if(L->item == x)
		return true;
	return pert(x,L->prox);
}

//Clonar uma lista existente 
lista clone(lista L){

	if(L == NULL)
		return NULL;
	return no(L->item,clone(L->prox));
}
//funções de lista ordenada

//subrotina/procedimento para inserção de dados de forma ordenada
void ins(Item x, lista *L){

	
	while(*L != NULL && (*L)->item < x)
		L = &(*L)->prox;

	
	*L = no(x,*L);

}

//subrotina/procedimento para retirada de um elemento de uma lista ordenada
void rem(Item x, lista *L){

	while(*L!= NULL && (*L)->item < x)
		L = &(*L)->prox;

	if(*L == NULL || (*L)->item > x)
		return;

	lista n = *L;
	*L = n->prox;
	free(n);
}

//função que busca um elemento na lista
bool em(Item x, lista L){

	while(L != NULL && L->item < x)
		L = L->prox;

	return (L != NULL && L->item == x? true:false);
}

//ex1
void exibirInv(lista L){

	if(L == NULL)return;

	exibirInv(L->prox);
	printf(fnt,L->item);
}

//ex3
void insM(Item x, lista *L){

	
	while(*L != NULL && (*L)->item > x)
		L = &(*L)->prox;

	
	*L = no(x,*L);

}