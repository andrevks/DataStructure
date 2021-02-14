#include "ListaFila.h"


 int main()
{
	fila f;
	inicializa(&f);
	int x;
	

	enqueue(100,&f);
	enqueue(66,&f);

	enqueue(76,&f);
	

	x = dequeue(&f);
	printf("%d\n",x);

	x = dequeue(&f);
	printf("%d\n",x);
	enqueue(76,&f);
	x = dequeue(&f);

	printf("%d\n",x);


	x = dequeue(&f);
	printf("%d\n",x);

	// x = dequeue(&f);
	// printf("%d\n",x);
	
		printf("TOTAL:%d \n",total);

	return 0;
}