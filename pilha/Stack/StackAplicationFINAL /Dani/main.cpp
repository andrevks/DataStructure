
#include "pilha.h"
#include "pilhaINT.h"

int main(void){
	//declaração de variaveis
	char *exp,posfixa[30];
	int i=0,c=0,*px,resp,flag;
	float resposta,opr1,opr2,letra;


	//inicialização da pilha
	Pilha *p;
	p = inicializa();

	PilhaInt *r;//pilha para resultado 
	r = inicializaInt();

	//leitura da expressao
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("\nALGORITMO PARA CALCULAR EXPRESSÕES NUMÉRICAS\n");
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("\nDIGITE A EXPRESSÃO:\n");
	printf(">>");
		scanf("%s", exp);
		//isalpha ....se for letra = diferente de zero 
		//loop para verificação 
		for(i=0;i<strlen(exp);i++){						
			px=&c;//ponteiro para pegar o endereço do index da posfixa
			
			if(isalpha(exp[i]) != 0 ){
				posfixa[c] = exp[i];			
				c++;
			}else{				
				//passando como parâmetro:
				//pilha,exp[30],i,posfixa[30],ponteiro *px
				infixaPposfixa(p,exp,i,posfixa,px);		
			}			
	}
	//para garantir que remova tudo da pilha no final	
	while(!isEmpty(p)){

		

		posfixa[c] = pop(p);

		if(posfixa[c] == '(' || ')'){

			printf("\nA EXPRESSÃO ESTÁ FALTANDO PARÊNTESES\n");
			exit(0);
		}
		
		c++;
		 // posição c para o vetor continuar da posição final do primeiro while
	}
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("DESEJA VISUALIZAR A EXPRESSÃO POSFIXA? S(0)/N(1)\n");
	scanf("%d",&resp);

	if (resp==0){
		printf("\nEXPRESSÃO POSFIXA\n");
		for(i=0;i<c;i++){
			printf("%c",posfixa[i]);			
		}	
	}

	
	//Segunda parte, cálculo da expressão
	printf("\n\n");
	for(i =0; i<c;i++){

		if(isalpha(posfixa[i]) != 0){

			printf("\nDigite o Valor de %c \n",posfixa[i]);
				scanf(" %f", &letra);

				//independente da letra, temos que empilhar 
				pushInt(r,letra);
		}else{

			//caso não seja alfanumérico, retiramos dois alfanuméricos da pilha, resolvemos e 
			//devolvemos à pilha

			opr1 = popInt(r);
			opr2 = popInt(r);
			

			switch(posfixa[i]){
				case '+':
					pushInt(r,  opr2 + opr1);

				break;
				case '-':
					pushInt(r, opr2 - opr1);
				break;	
				case '*':
					pushInt(r,opr2 * opr1);
				break;
				case '/':
					pushInt(r,opr2 / opr1);

				break;	
					

			}
			 
		}

		
	}

		resposta = popInt(r);
		printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("\nO RESULTADO DA EXPRESSÃO É: %.2f\n",resposta);
		printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

	printf("\n");
    return 0;
 }
