#include <stdio.h>

int main(){
	// int i,n,x;
	int i=0,x=0,n=0;
	do 
	{
		printf("X:");
		scanf("%d",&x);
		n+=x;
		printf("Outro valor? 1-SIM, 0-NAO\n");
		scanf("%d",&i);
	}
	while (i!=0); 
	printf("Soma:%d",n);
}