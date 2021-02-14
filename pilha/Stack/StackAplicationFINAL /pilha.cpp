#include "pilha.h"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define tam 10

struct pilha{
	int topo;
	char vet[tam];
};

Pilha* inicializa(){
	Pilha *p;

	p = (Pilha*)malloc(sizeof(struct pilha));

	if (p != NULL){
		p->topo=-1;
	}
	return p;
}
bool isFull(Pilha *p){
	if(p->topo==tam-1){
		return true;
	}else{
		return false;
	}
}
bool isEmpty(Pilha *p){
	if(p-> topo==-1)
		return true;
	else
		return false;
	
}
void push(Pilha *p,char elem){
	if(!isFull(p)){
		p->topo++;
		p->vet[p->topo]=elem;
		
	}else{
		printf("\nPILHA CHEIA!\n");
	}
}
char pop(Pilha *p){
	char x;
	if(!isEmpty(p)){
		x=p->vet[p->topo];
		p->topo--;
	}else{
		printf("\n Pilha vazia\n");
	}
	return x;
}
char top (Pilha *p){
	char x;
	if(!isEmpty(p)){
		x=p->vet[p->topo];
		
	}else{
		printf("\n Pilha Vazia!\n");
	}
	return x;
}
void libera(Pilha *p){
    free(p);
}
//PROJETO DA PROVA
char prioridade(Pilha *p,char elem[30]){
	//declaração de variáveis
	int flag=0,op1,op2,i;
	char x;


		switch(elem){				
			case '(':
				op1<-1;
				break;
			case '+':
			case '-':
				op1 = 2;
				break;
			case '*':
			case '/':
				op1 = 3;
				break;				

		 }//fim do switch do elem

		switch(p->vet[p->topo]){

			case '(':
				flag = 1;
				op2 = 1;
				break;
			case '+':
			case '-':
				op2 = 2;
				break;
			case '*':
			case '/':
				op2 = 3;
				break;
		}//fim do switch do topo

		if(op1 < op2)push(p,elem);

		if(op1 >= op2){

			if(flag != 1){ // caso não seja o parênteses aberto na pilha será TRUE

				x = pop(p);
				push(p,elem);
				return x;
			}else{
				push(p,elem);
			}
		}
			
			flag = 0;//reset da flag

}