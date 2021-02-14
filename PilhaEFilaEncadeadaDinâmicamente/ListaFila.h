#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define fnt " %d"//Definição do formato de exibição

int total;

typedef int Item;//Tipo dos itens na lista

typedef struct no{

	Item item;
	struct no *prox;

}*Lista;

//tipo do ponteiro para listas
typedef struct Fila {

	struct no *inicio;
	struct no *final;

}fila;




// //função para verificar se está cheio usando o total
// bool qisFull(fila *f);

//procedimento responsavel por iniciar/criar a pilha
void inicializa(fila *f);

//função para verificar se está vazia
bool qisEmpty(fila *f);

//subrotina/procedimento para inserir elementos no final da fila
void enqueue(Item x, fila * f);

Item dequeue(fila *f);