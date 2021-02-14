#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int Item;

typedef struct no{
	Item item;
	struct no*prox;
}*Lista;

struct pilha{

	struct no*topo;
};

typedef struct pilha Pilha;

void inicializa( Pilha *p);
void push( Pilha *p, int elem);
int pop( Pilha *p);
bool isEmpty(Pilha *p);
int top(Pilha *p);