#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exercicio 3 - Lista 1

int main(void){
	
	int larg, comp, area;
	
	printf("Digite a largura da parede: ");
	scanf("%d", &larg);
	printf("Digite o comprimento da parede: ");
	scanf("%d", &comp);
	
	area = comp * larg;
	
	printf("A area de sua parede eh: %d", area);
	
	return 0;
}
