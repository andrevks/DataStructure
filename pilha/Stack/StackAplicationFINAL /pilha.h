
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct pilha Pilha;
Pilha *inicializa();
void push(Pilha *p, char elem);
char pop (Pilha *p);
char top(Pilha *p);
bool isFull(Pilha *p);
bool isEmpty(Pilha *p);
void libera (Pilha *p);
char prioridade(Pilha *p,char elem[30],int i);