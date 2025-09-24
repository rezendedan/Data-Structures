#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op,chave;
	
	LISTA lista;
	iniciarLista(&lista);
	Pessoa dados;
	
	do{
		menu();
		scanf("%d",&op);
		switch (op)	{
			case 1:{
				
				if(!isFull(&lista)){
					dados = lerDados();
					if(busca(&lista, dados.chave) != -1){
						printf("Chave ja inserida!");
						system("pause");
					}
					else{
						inserirOrdenado(&lista,dados);
					}
				}
				else{
					printf("lista cheia!!!");
					system("pause");
				}
				break;
			}
			case 2:{
				printf("Chave:");scanf("%d",&chave);
				if (busca(&lista, chave) != -1){
					remover(&lista,chave);
				}
				else {
					puts("Chave nao encontrada!");
				}
				system("pause");
				break;

			}
			case 3:{
				imprimirLista(&lista);
				system("pause");
				break;
			}
			case 4:
			{
				printf("Chave:");scanf("%d",&chave);
				if (busca(&lista, chave) != -1){
					imprimirChave(&lista, chave);
				}
				else {
					puts("Chave nao encontrada!");
				}
				system("pause");
				break;
			}
		}
	}
	while(op!=0);
}