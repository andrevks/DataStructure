#include "ponto.h"
#define TAM 5

/*Aluno: André Geraldo, Eng. da computação. Professor: Constantino. Algoritmo que tem como objetivo
de criar um menu com as seguintes opções para manipulações com pontos(coordenadas): cria,acessa,atr
-ibui, distância entre pontos, somar pontos e subtrair pontos. O principal intuito é o uso
de um módulo para exportar as funções/subrotinas para outro arquivo que é linkado pelo include */

int main (){
	//declaração de variáveis
	int opc,flag = 0;
	PONTO p1,p2,pRes;
	float x,y;


	do{
		
		printf("\n=================================	");
		printf("\n              MENU           \n");
		printf("---------------------------------");
		printf("\n1- CRIA PONTO\n");
		printf("\n2- ACESSA AS COORDENADAS DO PONTO\n");
		printf("\n3- ATRIBUI NOVOS VALORES ÀS COORDENADAS\n");
		printf("\n4- SABER A DISTÂNCIA ENTRE DOIS PONTOS\n");
		printf("\n5- SOMAR OS PONTOS\n");
		printf("\n6- SUBTRAIR OS PONTOS\n");
		printf("\n7 - SAIR\n");
		printf("\n--------------------------------\n");
		printf("\nDIGITE: \n");
			scanf(" %d", &opc);
	

			switch(opc){
				case 1:

					//apresentação da função ao usuário
					printf("\n-=====-=====-=====-=====-=====-\n");
					printf("\nDigite as coordenadas:(x,y),respectivamente.\n");
					printf("\n>>>>>");
						scanf(" %f %f", &x , &y);//leitura de x e y
					printf("\n-=====-=====-=====-=====-=====-\n");

						p1 = criar(x,y);//chamada da função criar

						flag = 1;

					break;
				case 2:

				  	if(flag != 0){


						//chamada da subrotina acessar
						acessar(&p1,&x,&y);

					 	//exibição das coordenadas p/ o usuário
						printf("\n-=====-=====-=====-=====-=====-\n");
						printf("\nAS COORDENADAS SÃO:(%.1f,%.1f)",x, y);
						//devolve os valores das coordenadas de um ponto
						printf("\n-=====-=====-=====-=====-=====-\n");
				 }else{

				 	printf("\n Por favor crie um ponto\n");
				 }


					break;
				case 3:	

				 	 if(flag != 0){


						printf("\nDigite os novos valores para: (x,y)\n");
						printf(">>>>>>>");
							scanf(" %f %f", &x,&y);
						//chamada da subrotina atribuir
							atribuir(&p1, x,y);	
				}else{

						printf("\n Por favor crie um ponto\n");

				}


					break;
				 case 4:
				 	
				 	 if(flag != 0){

						printf("\nDigite valores para o novo ponto: (x,y)\n");
						printf(">>>>>>>");
							scanf(" %f %f", &x, &y);

						//chamada da subrotina criar
						p2 = criar(x,y);

						printf("\nA distância é:%.2f\n",(distancia(&p1,&p2)));
					}else{

						printf("\n Por favor crie um ponto\n");

					}	
					break;

				case 5:

					if(flag != 0){

					
						//chamada da função somar
						pRes = somar(p1,p2);
						printf("\n A soma das coordenadas:(%.1f,%.1f)\n",pRes.x,pRes.y);

					}else{
						
						printf("\n Por favor crie um ponto\n");

					
					}	
					break;

				case 6:

					if(flag != 0){


						//chamada da função somar
						pRes = subtrair(p1,p2);
						printf("\n A subtração das coordenadas:(%.1f,%.1f)\n",pRes.x,pRes.y);
					}else{
						
						printf("\n Por favor crie um ponto\n");

					}	

					break;
				case 7:
				
					printf("\n OBG, tenha um bom dia!\n");	
					break;
				default:

					printf("\nDigite um valor válido\n");
				
					break;

			}	

	}while(opc != 7);

	return 0;
}
