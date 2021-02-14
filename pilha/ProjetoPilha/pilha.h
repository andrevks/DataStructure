
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

#define TAM 10

//criação de variável pilha
typedef struct pilha Pilha;

//criação de um novo tipo 
typedef int tipo;

//função para inicializar pilha
Pilha* inicializa();

//subrotina para inserir na pilha
//(pilha,tamanho_da_pilha)
void push(Pilha *p,char * elem);


//função para remoção de um elemento da pilha
char * pop(Pilha *p);

//função para consulta do topo
char * top(Pilha *p);

//função para verificar se está cheio
bool isFull(Pilha *p);

//função para verificar se está vazio
bool isEmpty(Pilha *p);

//subrotina para liberar memória
void libera(Pilha *p);

//função para imprimir		
void imprime(Pilha *p);

void palindromo(Pilha *p);


//saber a prioridade dos elementos para a pilha de operadores
void prioridade(char * elem ,int i, char * posfixa);