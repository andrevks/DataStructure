#include "funcoes.h"
#define TAM 100


int main(){

		//declaração de variaveis
		char cargo[30];
		char cargoSal[30];
		int opc,op;
		int perc;
		struct funcionario info[TAM];

	do{
		printf("\n=================================	");
		printf("\n              MENU           \n");
		printf("---------------------------------");
		printf("\n1- CADASTRO DA TABELA SALARIAL\n");
		printf("\n2- lISTAR DE INFORMAÇÕES ANTERIORES\n");
		printf("\n3- ORDENAÇÃO DAS INFORMAÇOES- CÓDIGO, NOME E SALÁRIO-HORA\n");
		printf("\n4- LISTAR BUSCAR POR CÓDIGO DO CARGO\n");
		printf("\n5- AUMENTAR O SALARIO\n");
		printf("\n6- ALTERAR O CARGO\n");
		printf("\n7- ALTERAR SALARIO POR CARGO\n");
		printf("\n8 - SAIR\n");
		printf("\n--------------------------------\n");
		printf("\nDIGITE: \n");
			scanf(" %d", &opc);
	

			switch(opc){
				case 1:

					cadastro(info,TAM);
					flag =1;
					break;
				case 2:	
					listarInfo(info,TAM);
					break;
				case 3:	


					printf("\nDigite a opção que deseja ordenar:(codigo=1,cargo=2,salario=3)\n");
						scanf(" %d", &op);

					if(op == 1){

						printf("\nORDENAÇÃO POR CODIGO\n");
							bubbleCOD(info,TAM);
							listarInfo(info,TAM);


					}	
					
					if(op == 2){


						printf("\nORDENAÇÃO POR CARGO\n");	
							selectionCargo(info,TAM);
							listarInfo(info,TAM);
					}	

					if(op == 3){


						 printf("\nORDENAÇÃO POR SALARIO\n");	
							insertionSalario(info,TAM);
							listarInfo(info,TAM);

					}	

					break;
				case 4:
					if(flag == 1){
						int cod;

						bubbleCOD(info,TAM);

						printf("\nDigite o código: ");
							scanf(" %d", &cod);

						buscaBinaria(info,cod);


					}else{
						printf("\nPor favor, faça o cadastro\n");
					}
					break;

				case 5:
				

					printf("\nDigite o valor do aumento percentual(ex:25)\n");
						scanf(" %d", &perc);

					percentual(info,perc);
					listarInfo(info,TAM);

					break;

				case 6:
				
					printf("\nDigite o nome do cargo\n");
						scanf(" %s", cargo);

					alterarCargo(info,cargo);
					listarInfo(info,TAM);

					break;
					case 7:
				
					printf("\nDigite o nome do cargo\n");
						scanf(" %s", cargoSal);

					alterarSalario(info,cargoSal);
					listarInfo(info,TAM);

					break;
				case 8:
				
					printf("\n OBG, tenha um bom dia!\n");	
					break;
				default:

					printf("\nDigite um valor válido\n");
				
					break;

			}	

	}while(opc != 8);

	return 0;
}