#include "ponto.h"
#include<stdio.h>
#include<math.h>


/* TAD: Ponto (x,y)*/

/*Tipo exportado */
typedef struct {
	float x;
	float y;
}PONTO;



/* Funções exportadas*/

/* Função cria */
PONTO criar(float x, float y){
	PONTO p;
	

	//atribuindo os valores às coordenadas do ponto
	p.x = x;
	p.y = y;

		return p;//retorna um ponto com as coordenadas (x,y);
}

//função acessa
void acessar(PONTO *p, float *x, float *y){
		

	//alterando o valor de x e y com seus respectivos valores
	//que há dentro da struct passada
	*x = p->x;
	*y = p->y;

	//devolve os valores das coordenadas de um ponto
}

//função atribui
void atribuir(PONTO *p, float x, float y){

	//atribui novos valores às coordenadas do ponto
	p->x = x;
	p->y = y;
}

//função distância
float distancia(PONTO *p1, PONTO *p2){


	float dist,dx,dy;

	//cálculo da reta 
	dx = p2->x - p1->x;
	dy = p2->y - p1->y;

	 return sqrt(dx*dx + dy*dy);

	//retorna a distância entre dois pontos
}

//função para adição de pontos
PONTO somar(PONTO p1, PONTO p2){
	PONTO pResult;

	//somando as respectivas coordenadas
	pResult.x = p1.x + p2.x;
	pResult.y = p1.y + p2.y;

	return pResult;//retorna a nova coordenada adquirida pela soma dos vetores
}


//função subtração de pontos
PONTO subtrair(PONTO p1, PONTO p2){
	PONTO pResult;

	//subtraindo as respectivas coordenadas
	pResult.x = p2.x - p1.x;
	pResult.y = p2.y - p1.y;

	return pResult;//retorna a nova coordenada adquirida pela subtração dos vetores
}