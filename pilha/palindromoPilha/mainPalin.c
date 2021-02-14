#include "pilha.h"







int main (){

		Pilha *p;
		char palavra[TAM];
		tipo i;

		p = inicializa();


		printf("\n ------------------Palindromo-----------------------\n");
		printf("\nDIGITE UMA PALAVRA:\n");
			scanf(" %s", palavra);


		while(palavra[i] !='\0'){

			
			push(p,palavra[i]);


			i++;
		}


		palindromo(p);




	return 0;
}