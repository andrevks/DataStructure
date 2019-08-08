#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct ficha
{
	int matricula;
	int idade;
	char nome[10];

};
	
//subrotinas

//para leitura, passa como parâmetro struct e número de usuários 
void leitura(struct ficha *v,int a)
{

	printf("\n===========CADASTRAR USUÁRIOS===========\n");
	//leitura de alunos
	for(int i=0; i < a; i++){
		printf("\nMatricula, nome e idade, respectivamente\n");
		 scanf(" %d %s %d", &v[i].matricula, v[i].nome, &v[i].idade); 
	}

}
//para escrita ou exibição, passa como parâmetro struct e número de usuários 
void escrita(struct ficha *v, int a){
	
	
	//escrita de alunos na tela
	printf("\nMatricula  Nome  Idade");
	for(int i=0;i<a;i++){
		printf("\n %d %s %d \n", v[i].matricula, v[i].nome, v[i].idade);
	}
}

//algoritmo para ordenação bubble sort para matricula, passa como parâmetro struct e número de usuários 
void bubbleMatricula(struct ficha *v, int a){
	//declaração de variáveis
	struct ficha aux;//cria um auxiliar do tipo ficha 

	//ordenação de matricula
	for(int i=0;i<a;i++){

		for(int j=i+1;j<a;j++){

				if(v[i].matricula>v[j].matricula){

					//faz a troca
					aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}

		}
	}
}

//algoritmo de ordenação selection Sort, para ordenação crescente de nome em registro
void selectionNome(struct ficha *v,int a){

	//declaração de variáveis
	struct ficha aux;//cria um auxiliar do tipo ficha
	int menor;
	//ordenação de matricula
	for(int i=0;i<a-1;i++){
		
		menor = i;//menor recebe a posição atual do i 

		for(int j=i+1;j<a;j++){

				//compara procurando o menor, sem haver a troca, realmente.
				if((strcmp(v[j].nome,v[menor].nome))<0){
					menor = j;//pega a posição
				}
		}
			//Check it out, se houve alguma troca de posição do menor
			if(menor != i){
				//caso, sim, fazemos a troca do registro 
				aux = v[i];//trocamos o que estiver no I e colocamos o menor nesse exato lugar
				v[i] = v[menor];
				v[menor] = aux; 

			}
	}
}

//Algoritmo de ordenação insertion sort, para ordenação crescente de idade no registro
void insertionIdade(struct ficha *v,int a ){

	//declaração de variáveis 
	struct ficha atual; //cria um auxiliar do tipo ficha
	int i,j;

	for(i=0;i<a;i++){
		atual = v[i];//recebe o registro atual no vetor
					//para ser comparado com os anteriores

		
		for(j=i;j>0 && atual.idade < v[j-1].idade;j--){

			v[j] = v[j-1]; //elemento atual do vetor
						   //recebe o elemento anterior
						   //que é maior que o atual 
		}	
			//quando não tem como comparar ou o valor não é maior que o atual
			//o loop com o j se encerra, o valor da variavel "atual" é atribuida 
			//para a posição j do vetor após o loop
			
			v[j] = atual;

	}
} 


//subrotina de busca binária
void buscaBinaria(struct ficha *v, int n,int elem){
	//declaração de variáveis
	int inicial = 0,meio,final = n-1;
	bool achou = false;//boleano

		//Para somente se o inicial não for menor que o final
		//e se achar 
		while(inicial <= final && achou == false){
			meio = (final+inicial)/2;//meio recebe a soma do final e inicial dividido por 2


			if(elem < v[meio].idade) final = meio - 1;//se elem for menor que o valor do meio, o final então está antes
													  //do meio

			if(elem > v[meio].idade) inicial = meio + 1;// se elem for maior que o valor do meio, o inicial então está 
														//depois do meio

			if(elem == v[meio].idade) achou = true;//se o elem tiver o mesmo valor do meio, então encontrou



		}

		// condição, se e senao, para informar se encontrou ou não
		(achou == true)?printf("\n%d,FOI ENCONTRADO NA POSIÇÃO: %d \n",elem,meio )
		:printf("\nNÃO ENCONTRADO!\n" ); 
			

		
}
