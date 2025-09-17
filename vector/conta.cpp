#include <stdio.h>

void saque(float *saldo, float valor);

void deposito(float *saldo, float valor);

int main(){
/*	
	float saldoConta=0;
	deposito(&saldoConta,1000);
	saque(&saldoConta,200);
	printf("Saldo:%2.f", saldoConta);
*/
int *p;
int x;
x=10;
p = &x;

printf("End. de memoria de p:%p\n",&p);
printf("End. de memoria de x:%p\n",&x);
printf("Conteudo de X:%d\n",x);
printf("End. de memoria apontado por p:%p:\n",p);
printf("Conteudo de para onde p esta apont.:%d\n",*p);

}

void saque(float *saldo, float valor){
	if(*saldo >= valor)
		*saldo -= valor;
	else
		puts("Saldo insuficiente");
}

void deposito(float *saldo, float valor){
	*saldo += valor;
}

