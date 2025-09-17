#include<stdio.h>
#include<stdlib.h>

void cadastrar(int *v, int tam);
void listar(int v[], int tam);

int main(){
	int i,t;
	int *v;
	printf("Quantidade:");
	scanf("%d", &t);
	v = (int*) malloc(sizeof(int) * t);	
	cadastrar(v,t);
	listar(v,t);
}

void cadastrar(int *v, int tam){
	int i;
	for(i=0; i < tam; i++){
		scanf("%d",&v[i]);
	}	
}

void listar(int v[], int tam){
	int i;
	for(i=0; i < tam; i++){
		printf("V:%d\n", v[i]);
	}
}

