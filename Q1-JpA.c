#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Exercicio 1

int main(void){
	int num;
	int triplo;
	
	printf("Digite um numero inteiro: ");
	scanf(" %d",& num);
	
	triplo = (num * 3);
	
	printf("O triplo de %d eh %d", num, triplo);
	
	return 0;
}

