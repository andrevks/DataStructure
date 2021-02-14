#include "pilha.h"


int main(){
	//declaração de variáveis
	 Pilha *p;
	 tipo n;

	 //inicialização da pilha
	 p = inicializa();

	 

		//pergunta ao usuário para digitar um número decimal
	 	printf("\n-----------AlGORITMO PARA CONVERSÃO DE NÚMERO DECIMAL PARA BINÁRIO--------------\n");
	 	printf("\nDIGITE UM NÚMERO PARA CONVERSÃO EM BINÁRIO\n");
	 	printf(">>>>>>>>");
	 		scanf(" %d", &n);

	 	converterBinario(p,n);
	 	

	 	imprimirBinario(p);


	 	libera(p);
	 		

}