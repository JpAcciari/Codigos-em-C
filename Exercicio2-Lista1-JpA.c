#include <stdio.h>
#include <stdlib.h>

//Exercicio 2 - Lista 1

int main(void){
	
	int x;
	int largura, area;
	int comprimento = 8;
	
	printf("Digite o numero correspondente a X: ");
	scanf("%d", &x);
	
	largura = (2 * x) + 3;
	
	area = largura * comprimento;
	
	printf("A area do terreno eh: %d ", area);
	
	return 0; 
}
