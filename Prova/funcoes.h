#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

struct funcionario
{
	int cod;
	char cargo[30];
	float salario;	
};

int qtd,flag=0;

//primeira opc

//para leitura, passa como parâmetro struct e número de usuários 
void cadastro(struct funcionario *v,int a)
{
	int i=0;
	char resp;
	printf("\n============ CADASTRAR USUÁRIOS ============\n");

	//leitura de fucionarios
	do{
		printf("\nCODIGO, CARGO e SALÁRIO, respectivamente\n");
		 scanf(" %d %s %f", &v[i].cod, v[i].cargo, &v[i].salario);
		 

		 printf("\nDESEJA CONTINUAR CADASTRANDO(N/Y)?\n");
		 	scanf(" %c", &resp);
		 	i++; 

	}while(resp == 'y' && i<a);

		qtd =i-1; 
	
}

//segunda opc
//para escrita ou exibição, passa como parâmetro struct e número de usuários 
void listarInfo(struct funcionario *v, int a){
	
	
	//escrita de alunos na tela
	printf("\nCÓDIGO | CARGO | SALARIO");
	printf("\n ------------------------ ");

	for(int i=0;i<=qtd;i++){
		printf("\n %d %s %.2f \n", v[i].cod, v[i].cargo, v[i].salario);
	}
}

//terceira opc

//Ordenação por COD
//algoritmo para ordenação bubble sort para codigo, passa como parâmetro struct e número de funcionarios 
void bubbleCOD(struct funcionario *v, int a){
	//declaração de variáveis
	struct funcionario aux;//cria um auxiliar do tipo funcionario 

	//ordenação do codigo
	for(int i=0;i<=qtd;i++){

		for(int j=i+1;j<=qtd;j++){

				if(v[i].cod>v[j].cod){

					//faz a troca
					aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}

		}
	}
}


//Ordenação por Cargo

//algoritmo de ordenação selection Sort, para ordenação crescente de cargo em registro
void selectionCargo(struct funcionario *v,int a){

	//declaração de variáveis
	struct funcionario aux;//cria um auxiliar do tipo funcionario
	int menor;

	//ordenação do cargo
	for(int i=0;i<=qtd-1;i++){
		
		menor = i;//menor recebe a posição atual do i 

		for(int j=i+1;j<=qtd;j++){

				//compara procurando o menor, sem haver a troca, realmente.
				if((strcmp(v[j].cargo,v[menor].cargo))<0){
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

//Ordenação por Salario

//Algoritmo de ordenação insertion sort, para ordenação crescente do salario no registro
void insertionSalario(struct funcionario *v,int a){

	//declaração de variáveis 
	struct funcionario atual; //cria um auxiliar do tipo funcionario
	int i,j;

	for(i=0;i<=qtd;i++){
		atual = v[i];//recebe o registro atual no vetor
					//para ser comparado com os anteriores

		
		for(j=i;j>0 && atual.salario < v[j-1].salario;j--){

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
//Quarta opc

//subrotina de busca binária
void buscaBinaria(struct funcionario *v,int elem){
	//declaração de variáveis
	int inicial = 0,meio,final = qtd;
	bool achou = false; //boleano

		//Para somente se o inicial não for menor que o final
		//e se achar 
		while(inicial <= final && achou == false){
			meio = (final+inicial)/2;//meio recebe a soma do final e inicial dividido por 2


			if(elem < v[meio].cod) final = meio - 1;//se elem for menor que o valor do meio, o final então está antes
													  //do meio

			if(elem > v[meio].cod) inicial = meio + 1;// se elem for maior que o valor do meio, o inicial então está 
														//depois do meio

			if(elem == v[meio].cod) achou = true;//se o elem tiver o mesmo valor do meio, então encontrou



		}

		// condição, se e senao, para informar se encontrou ou não
		(achou == true)?printf("\n%d,FOI ENCONTRADO NA POSIÇÃO: %d \n",(elem + 1),meio )
		:printf("\nNÃO ENCONTRADO!\n" ); 
			

		
}


//Letra B da prova e caso 5

void percentual(struct funcionario *v,int perc){
	//declaração de variaveis 
	float div;
	div = perc * (pow(10,-2)); // Transformando o porcentual em decimal

	for(int i=0;i<=qtd;i++){
		
		v[i].salario = ((v[i].salario * div) + v[i].salario); // salario ira receber o salario mais o salario multiplicado pelo div

	}

}


//letra c da prova caso 6

void alterarCargo(struct funcionario *v, char carg[30]){
	//declaração de variaveis
	char novo[30];
	bool existe = false;
	//laço para percorrer o registro
	for(int i=0;i<=qtd;i++){
		//condição verificadora de igualdade de cargos
		if((strcmp(v[i].cargo,carg))==0){
			//se encontrou o cargo, ira solicitar um nome para um novo cargo
			printf("\nDIGITE O NOME DO NOVO CARGO\n");
				scanf(" %s", novo);
			//função responsavel de copiar uma string para a outra
			strcpy(v[i].cargo , novo);
			existe = true;

			break;
		}

		
	}
		if(existe=false) printf("\nNÃO FOI ENCONTRADO :/\n");
}

//letra D da prova caso 7


void alterarSalario(struct funcionario *v, char cargSal[30]){
	//declaração de variaveis
	float novo;
	bool existe = false;

	for(int i=0;i<=qtd;i++){

		if((strcmp(v[i].cargo,cargSal))==0){
			//Se encontrar o cargo igual, ira solicitar para digitar um novo salario para este cargo
			printf("\nDIGITE O VALOR DO NOVO SALARIO: \n>>");
				scanf(" %f", &novo);
			//Salario recebe um novo salario
			v[i].salario = novo;

			existe = true;

			break;
		}

		
	}

	if(existe == false) printf("\nNÃO FOI ENCONTRADO :/\n");
	
}
