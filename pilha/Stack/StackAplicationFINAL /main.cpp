
#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(void){

	char exp[30],posfixa[30],elem;
	int i=0,j=0,x;
	//j = (int*) malloc(sizeof(int));
	//*j=0;

	Pilha *p;
	p = inicializa();


	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\nALGORITMO PARA CALCULAR EXPRESSÕES NUMÉRICAS\n");
	printf("\nDIGITE A EXPRESSÃO:\n");
	printf(">>>>>>>>>");
		scanf(" %s", exp);
		//isalpha ....se for letra = diferente de zero 
		//loop para verificação 
		for(i=0;i < strlen(exp) ;i++){

			if(isalpha(exp[i]) != 0 ){
				posfixa[j] = exp[i];
				//printf(" Valor de posfixa para LETRA: %c posição %d\n",posfixa[i],i);
				j++;
			}else{

				elem = exp[i];

				if(isEmpty(p) || exp[i] == '(') {

					push(p,exp[i]);//caso encontre um parênteses aberto
				}
					if(exp[i] == ')'){//caso encontre um parênteses fechado

						while(p->vet[p->topo] != '('){
							posfixa[j] = pop(p);
							j++;
						}
						x = pop();//remover o '('

					}else{
						
						posfixa[j] = prioridade(p,elem);
						j++;	
					}
				
				//printf("EXPRESSÃO %c %d",posfixa[i],i);

			}

		}		
		//para garantir que remova tudo da pilha no final
		while(!isEmpty(p)){
			printf("Desempilhamento final sobre oq restou da pilha\n");
			posfixa[j] = pop(p);
			j++; // posição i para o vetor continuar da posição final do primeiro while
		}	

		printf("EXPRESSÃO POSFIXA\n");
		for(i=0;i < strlen(posfixa);i++){
			printf("%c",posfixa[i]);
			
		}
		printf("\n");


        return 0;
}