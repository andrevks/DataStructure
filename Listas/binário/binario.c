#include "binario.h"

struct pilha
{
	int topo;
	tipo vet[TAM];
};

//função iniciliza pilha
Pilha* inicializa(){

	Pilha *p;

	//reservar uma área de memória
	p = (Pilha*) malloc(sizeof(struct pilha));


	if(p != NULL){

		//topo recebe a posição -1
		p->topo = -1;

		return p;
	}

}

//função para verificar se a pilha está cheia
bool isFull(Pilha *p){
	
	//verificação se chegamos limite do topo
	if(p->topo == TAM-1){
		return true;
	}else{
		return false;
	}

}

//função para verificar se a pilha está vazia
bool isEmpty(Pilha *p){

	//verificação se estamos antes de começar a pilha
	if(p->topo == -1){
		return true;

	}else{
		return false;

	}


}

//subrotina para inserir elementos na pilha
void push(Pilha *p, int elem){

	//verificação se a pilha não está cheia
	if(!isFull(p)){
		p->topo++; //incrementamos o topo para atribuir um novo elem

		p->vet[p->topo] = elem;

	}else{
		printf("\n A pilha está cheia !\n");
	}

}

//função para remover elementos da pilha
tipo pop(Pilha *p){
	//declaração de variável para guardar o valor removido
	int x;
	//verificação se a pilha não está vazia
	if(!isEmpty(p)){

		//recebendo o elemento atual no topo	
		x = p->vet[p->topo];
		//voltando uma posição do topo
		p->topo--;

	}else{
		
		printf("\nA pilha está vazia !\n");
		
	}
 
	
		//retornando o valor removido
		return x;
}

//função para consulta de elementos da pilha
tipo top(Pilha *p){
	//declaração de variável para guardar o valor removido
	int x;
	//verificação se a pilha não está vazia
	if(!(isEmpty(p))){
		//acessando o vetor(pilha) e atribuindo
		//recebendo o elemento atual no topo	
		x = p->vet[p->topo];

	}else{
		
		printf("\nA pilha está vazia !\n");
	}

	
		//retornando o valor consultado
		return x;
}


void imprime(Pilha *p){

	printf("\n>>>>>");

	for(int i=0;i<= p->topo;i++){

		printf("|%d", p->vet[i]);

	}

	printf("\n");
}