
#include "ponto.c"

/* TAD: Ponto (x,y)*/

/*Tipo exportado */
typedef struct PONTO ponto;


/* Funções exportadas*/

/* Função cria */
PONTO criar(float x, float y);

//função acessa
void acessar(ponto *p, float *x, float *y);


//função atribui
void atribuir(ponto *p, float x, float y);
 
//função distância
float distancia(ponto *p1, PONTO *p2);

//função para adição de pontos
PONTO somar(ponto p1, PONTO p2);

//função subtração de pontos
PONTO subtrair(ponto p1, PONTO p2);