#include <stdio.h>

typedef struct {
	int chave;
	char nome[20];
	int idade;
 	int peso;
	double salario;
}  funcionario;

funcionario lerDados();
void imprimir(funcionario f);

int main(){
	int i;
	funcionario f[5];
	for (i=0; i<2; i++) {
		f[i] = lerDados();
	}
	
	for (i=0; i<2; i++) {
		imprimir(f[i]);
	}
}

funcionario lerDados(){
	funcionario p;
	printf("Chave:");
	scanf("%d",&p.chave);
	printf("Nome:");
	fflush(stdin);
	fgets(p.nome,40,stdin);
	printf("Idade:");
	scanf("%d",&p.idade);
	printf("Peso:");
	scanf("%d",&p.peso);
	printf("Salario:\n");
	scanf("%lf",&p.salario);
	return p;
}

void imprimir(funcionario f){
		printf("Nome:%s",f.nome);
		printf("Idade:%d\n",f.idade);
		printf("Peso:%d\n",f.peso);
		printf("Salario:%.2f",f.salario);	
}
