#include "ListaPilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//procedimento responsavel por iniciar/criar a pilha
void inicializa(Pilha *p){	
	p->topo = NULL;
}
//procedimeno responsavel por inserir valor na pilha
void push(Pilha *p, int elem){

	Lista n = malloc(sizeof(struct no)); 
	n->item = elem;		//recebe o valor	
	n->prox= p->topo;	//adc seu endereço de memoria como valor do topo
	p->topo = n;			
}

//Função responsavel por remover o valor da pilha
int pop(Pilha *p){
	int elem;
	Lista x;

	if(!isEmpty(p)){	//se nao for vazia
		x= p->topo;		//recebe o valor que esta no topo da pilha
		p->topo=x->prox;	//o topo da pilha recebe o endereço do prox (null)
		elem = x->item;		//elemento recebe o item que estava no topo.
		free(x);			//libera memoria de x
	}else{
		printf("Pilha vazia!");
	}
	return elem;			//retorna o elemento retirado
}

//Responsavel por verificar se a pilha esta vazia
bool isEmpty(Pilha *p){

	if(p->topo==NULL)		//a mesma se encotnra vazia somente quando o valor do topo da pilha é nulo.
		return true;
	else
		return false;
}

int top(Pilha *p){
	
	int x;
	Lista y;
	if(!isEmpty(p)){		//se nao for vazia
		y=p->topo;			//y recebe o topo da pilha
		x=y->item;			//guarda em x o valor do item;
	}else{
		printf("Pilha vazia!\n");
	}
	return x;				//retorna ele.
}
