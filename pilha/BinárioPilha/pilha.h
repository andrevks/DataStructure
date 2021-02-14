

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define TAM 10

//criação de variável pilha

typedef struct pilha Pilha;

//criação de um novo tipo 
typedef int tipo;

//função para inicializar pilha
Pilha* inicializa();

//subrotina para inserir na pilha
//(pilha,tamanho_da_pilha)
void push(Pilha *p,int elem);


//função para remoção de um elemento da pilha
int pop(Pilha *p);

//função para consulta do topo
int top(Pilha *p);

//função para verificar se está cheio
bool isFull(Pilha *p);

//função para verificar se está vazio
bool isEmpty(Pilha *p);

//subrotina para liberar memória
void libera(Pilha *p);

//função para imprimir		
void imprime(Pilha *p);

//subrotina para imprimir o binário
void imprimirBinario();

//subrotina para converter binário
void converterBinario();