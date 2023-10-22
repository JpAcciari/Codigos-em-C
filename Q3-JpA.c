#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Exercicio 3

int main (void){
	
	int n1, n2;
	int maior;
	
	printf("Digite 2 numeros:\n ");
	scanf("%d" "%d", & n1, & n2);
	
	if(n1 > n2){
		printf("\nO maior numero eh: %d ", n1);
	}
	else if(n2 > n1) {
		printf("\nO maior numero eh: %d ", n2);
	} 
	else if (n1 = n2){
		printf("\nOs numeros sao iguais ");
	}
	
	
	return 0;
}
