
//inclusão do arquivo cabecalho.h, que deve estar na mesma pasta
#include "cabecalho.h"


int main()
{
	//declaração de variáveis e struct
	struct ficha cadastro[5];

	
	//FIRST o uso do bubble sort

	//  leitura(cadastro,3);//passagem por referência 
	// 	bubbleMatricula(cadastro,3);//subrotina de ordenação bubble de matricula
	// 	printf("\n======s==================\n");
	// 	printf("\nOrdenação por MATRICULA:\n");
	// 	escrita(cadastro,3);//subrotina para impressão na tela

	//SECOND o uso do bubble sort

	// selectionNome(cadastro,3);//subrotina para ordenação selection por nome
	// 	printf("\n========================\n");
	// 	printf("\nOrdenação por NOME:\n");
	// 	escrita(cadastro,3);
		
	//THIRD o uso do bubble sort	

	// insertionIdade(cadastro,3);//subrotina para ordenação insertion
	// 	printf("\n========================\n");
	// 	printf("\nOrdenação por IDADE:\n");
	// 	escrita(cadastro,3);

	//FOURTH o uso do insertion e busca binária
	
		leitura(cadastro,3);
		insertionIdade(cadastro,3);
		escrita(cadastro,3);
		buscaBinaria(cadastro,3,15);

	return 0;
}

