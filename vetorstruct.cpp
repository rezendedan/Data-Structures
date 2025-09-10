#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int chave;
	char nome[20];
	double salario;
}  funcionario;

funcionario lerDado();
void imprimir(funcionario f);
void lerDados(funcionario *f, int tam);

int main(){
	int i;
	
	funcionario *f;
	
	f = (funcionario*) malloc (sizeof(funcionario) * 5);
	lerDados(f, 2);
	for (i=0; i<2; i++) {
		imprimir(f[i]);
	}
	free(f);
}

void lerDados(funcionario *f, int tam){
	int i;
	for(i=0; i < tam; i++){	
		printf("Chave:");
		scanf("%d",&f[i].chave);
		printf("Nome:");
		fflush(stdin);
		fgets(f[i].nome,40,stdin);
		printf("Salario:\n");
		scanf("%lf",&f[i].salario);
	}
}

funcionario lerDado(){
	funcionario p;
	
	printf("Chave:");
	scanf("%d",&p.chave);
	printf("Nome:");
	fflush(stdin);
	fgets(p.nome,40,stdin);
	printf("Salario:");
	scanf("%lf",&p.salario);
	return p;
}

void imprimir(funcionario f){	
		printf("Chave:%d\n",f.chave);
		printf("Nome:%s",f.nome);
		printf("Salario:%.2f\n",f.salario);	
}