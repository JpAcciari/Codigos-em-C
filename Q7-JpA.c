#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escreva um programa que leia 10 numeros inteiros e informe sua soma, a quantidade de pares e a quantidade de impares

int main(void){
	int i, qtdi = 0, qtdp = 0;
	int soma = 0;
	int vet[10];
	
	for(i = 0; i < 10; i++){
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &vet[i]);
		
		soma = soma + vet[i];
		
		if((vet[i] % 2)==0){
			qtdp++;
		} 
		else {
			qtdi++;
		}
	}
	
	printf("\nA soma eh: %d\nquantia de pares: %d\nquantia de impares: %d ", soma, qtdp, qtdi);
	
	return 0;
}
