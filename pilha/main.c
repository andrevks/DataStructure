#include "pilha.h"



int main(){
	//declaração de variáveis
	Pilha *p;



	
	tipo x;
	//inicialização da pilha 
	p = inicializa();

	push(p,0);
	push(p,0);
	push(p,0);
	push(p,1);


		imprime(p);


		//no final libera memória 
	return 0;
}