
#include "ListaFila.h"


int total;
int modif;

//procedimento responsavel por iniciar/criar a pilha
void inicializa(fila *f){	
	
		f->inicio = NULL;
		f->final = NULL;

		total = 0;

}

//função para verificar se está vazia
bool qisEmpty(fila *f){
	//qisEmpty = (f.comeco = final);

	if(f->inicio == NULL){
		return 1;
		
	}else{

		return 0;
	}
}


//subrotina/procedimento para inserir elementos no final da fila
void enqueue(Item x, fila *f){

	Lista aux = malloc(sizeof(Lista));
	Lista novo = malloc(sizeof(Lista));

 	 aux->item = x;

 	 	if(f->final == NULL){
				f->inicio = aux;
				total++;
		}else{
			if(f->final != NULL)
				

			f->final->prox = aux;

			total++;
		}
			aux->prox = NULL;
			f->final = aux;

 }

Item dequeue(fila *f){

	Item aux;
	Lista removido = malloc(sizeof(struct no));

	if(!qisEmpty(f)){

			removido = f->inicio;
			aux = removido->item;
			f->inicio = removido->prox;

		total--;//total é decrementado

		return aux;

	}else{

		printf("\nEBA! Fila Vazia\n");

	}
}



 