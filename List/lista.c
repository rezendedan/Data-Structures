#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void imprimirDados(Pessoa p){
	printf("Chave:%d\n", p.chave);
	printf("Nome:%s", p.nome);
	printf("Salario:%.2lf\n", p.salario);		
}

void iniciarLista(LISTA *l){
	l->tam=0;
}

int isFull(LISTA *l){
	if(l->tam == MAX) return 1;
	else return 0;
}

void inserir(LISTA *l, Pessoa p) {
	l->dados[l->tam] = p;
	l->tam++;
}

void imprimirLista(LISTA *l){
	int i;
	for(i=0; i < l->tam; i++){
		imprimirDados(l->dados[i]);		
	}
};

void imprimirChave(LISTA *l, int chave){
	int i;
	for(i=0; i < l->tam; i++){
		if (chave == l->dados[i].chave) 
			imprimirDados(l->dados[i]);		
	}	
}

int busca(LISTA *l, int chave){
	int i;
	for(i=0; i < l->tam; i++){
		if (chave == l->dados[i].chave)
			return i;
	}
	return -1;
}

void remover(LISTA *l, int chave){
	int i,j;
	for(i=0; i < l->tam; i++){
		if (chave == l->dados[i].chave){
			j = i; break;
		}
	}
	for(i=j; i < l->tam; i++)
		l->dados[i]=l->dados[i+1];
	l->tam--;
}

void inserirOrdenado(LISTA *l, Pessoa p ){
	int i,j=0;
	for(i=0; i < l->tam; i++){
		if (l->dados[i].chave > p.chave) {
			j = i; break;
		}
		j++;
	}
	for(i= l->tam ; i > j; i--)
		l->dados[i]=l->dados[i-1];
	l->dados[j] = p;
	l->tam++;	
}

void menu(){
	system("cls");
	printf("Digite uma opcao:\n");
	printf("1 - Inserir\n");
	printf("2 - Remover\n");
	printf("3 - Listar\n");
	printf("4 - Buscar\n");
	printf("0 - Sair\n");
}

Pessoa lerDados(){
	Pessoa p;
	
	printf("Chave:");
	scanf("%d",&p.chave);
	printf("Nome:");
	fflush(stdin);
	fgets(p.nome,40,stdin);
	printf("Salario:");
	scanf("%lf",&p.salario);
	return p;
}
