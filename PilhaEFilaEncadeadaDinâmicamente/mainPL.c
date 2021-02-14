/* ESTRUTURA DE DADOS I - Professor Constantino
	*Contrução de uma Pilha utilizando Lista Ligada
	*Atividade avaliativa.
	*Autor(a):André Geraldo Guimarães Pinto, Danubia Gama Macedo - 3º Semestre - Engenharia da Computação
	*Desenvolvido no dia 04 de dezembro de 2019.
*/

#include <stdio.h>
#include "ListaPilha.h"
#include <stdlib.h>
#include <stdbool.h>
int main(){
	Pilha p;
	inicializa(&p);
	push(&p,10);
	push(&p,12);
	push(&p,13);
	push(&p,14);
	push(&p,15);
	printf("valor topo %d\n",top(&p));

	int x= pop(&p);

	printf("\nvalor tirado: %d\n",x );
	printf("valor topo %d\n",top(&p));

	while(!isEmpty(&p)){
		printf("%d \n",pop(&p)); 
	}
}