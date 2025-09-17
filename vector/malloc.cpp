#include<stdio.h>
#include<stdlib.h>

void cadastrar(int *v,int tam);

int main(){
	
	int i,t=11;
	float f;
	int *v;
	// exemplo de casting de tipos
	// conversão implicita de int para float
	// f = (float) t/2;
	// printf("%.2f",f);
	// retorna o endereço de memória alocado;

	printf("Quantidade:");
	scanf("%d", &t);
	v = (int*) malloc(sizeof(int) * t);	
	for(i=0; i <t; i++){
		scanf("%d",&v[i]);
	}
	for(i=0; i <t; i++){
		printf("V:%d\n", v[i]);
	}
}
