#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define MAX 20

int menu();
void preencher(int V[], int tam );
void listar(int V[], int tam);
int buscar(int V[], int tam, int valor);
int contador(int valor, int V[], int tam);

int global;

int main(){
	int op,valor,i;
	int vetor[MAX];
	do {
		op=menu();
		if (op == 1) preencher(vetor,MAX);
		if (op == 2) listar(vetor,MAX);
		if (op == 3) {
			printf("Valor:");scanf("%d",&valor);
			if((i=buscar(vetor,MAX,valor)) == -1){
				printf("valor nao encontrado");
			}
			else{
				printf("Valor: %d, em V[%d]", valor,i);	
			}
			system("pause");
		}
		if (op == 4) {
			printf("Valor:");scanf("%d",&valor);
			printf("Quantidade:%d", contador(valor, vetor, MAX));
			system("pause");
		}
	}
	while(op!=5);
}

int menu(){
	
	int op;
	system("cls");
	printf("1 - Preencher\n");
	printf("2 - Listar\n");
	printf("3 - Buscar\n");
	printf("4 - Quantidade\n");	
	printf("5 - Sair\n");
	printf("Digite uma opcao:");
	scanf("%d",&op);
	return op;
}

void preencher(int V[], int tam ){
	int i;
	// criar a semante da geração
	srand(time(NULL));
	for(i=0 ; i < tam ;i++){
		// atribui numeros aletorios de 0 a mod % valor
		V[i]=rand()%11;
	}
}

void listar(int V[], int tam){
	int i;
	for(i=0 ; i < tam ; i++)  
		printf("V[%d]=%d \n",i,V[i]);
	system("pause");
}

int buscar(int V[], int tam, int valor){
	int i;
	
	for(i=0 ; i < tam ; i++){
		if(V[i] == valor){
			return i;
		}
	}  
	return -1;
}

int contador(int valor, int V[], int tam){
	int qtd=0, i;
	
	for(i=0 ; i < tam ; i++){
		if(V[i] == valor){
			qtd++;
		}
	}  
	return qtd;
}
