#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Crie um programa que leia um numero par e mostre o seu quadrado - Lembre-se que par é divisivel por 2

int main (void){
	
	int num;
	int conta;
	int resto;
	
	printf("Digite um numero par: ");
	scanf("%d", &num); 
	
	resto = num % 2;
	
	if(resto > 0){
		printf("Digite apenas numeros pares");
	}
	else{
		conta = num * num;
		printf("O numero ao quadrado eh: %d", conta);
	}
	
	return 0;
}
