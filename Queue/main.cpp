#include "queue.h"


int main(){
	//declaração de variáveis
	fila *f;
	elem x;
	f = inicializa();

	for(int i=0; i <= TAM;i++){

		printf("\n número para ser inserido: %d\n",i);
		enqueue(f,i);

	}



	for(int i=0;i<=TAM;i++){
		
		
		x = dequeue(f);
		printf("\n número  removido: %d\n",x);
	}

	

	return 0;
}