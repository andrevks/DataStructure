
#include "pilha.h"


int main (){

	//declaração de variáveis
	char exp[30],posfixa[30];
	int i=0, flag = 0;
	Pilha *op;
	op = inicializa();


	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\nALGORITMO PARA CALCULAR EXPRESSÕES NUMÉRICAS\n");
	printf("\nDIGITE A EXPRESSÃO:\n");
	printf(">>>>>>>>>");
		scanf(" %s", exp);

		//isalpha ....se for letra = diferente de zero 
		//loop para verificação 
		while(exp[i] != '\0'){

			if(isalpha(exp[i]) != 0 ){

				posfixa[i] = exp[i];
				

			}else{
				
				prioridade(exp,i,posfixa);
			}

			i++;
		}
		
		//para garantir que remova tudo da pilha no final
		while(!isEmpty){

			posfixa[i] = pop(op);
			i++; // posição i para o vetor continuar da posição final do primeiro while
		}	



				// switch(ex[i]){

				// 	case '(':

				// 		push(op,ex[i]);
				// 		flag = 1;
				// 		op2 <- 1;
				// 	break;
				// 	case ')':

				// 		while(op->topo != '('){

			 // 				posfixa[i] = pop(op,ex[i]);


				// 		}	

				// 	break;
				// 	case '+','-':
				// 		op1 = 2;

				// 	break;
				// 	case '*','/':
				// 		op1 = 3;
				// 	break;

				// }

				// switch(p->vet[p->topo]){

				// 	case '+','-':
				// 		op2 = 2;

				// 	break;
				// 	case '*','/':
				// 		op2 = 3;
				// 	break;

				// }


				// if(flag != 1 ){


				// 	if(op1 > op2 || op1 == op2){
				// 		//posfixa[i] = pop(op);
				// 		push(op,ex[i]);

				// 	}else{

				// 		push(op,ex[i]);
				// 	}

				// }


				// flag = 0;


		


	return 0;
}