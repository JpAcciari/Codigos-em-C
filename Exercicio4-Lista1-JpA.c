#include <stdio.h>
#include <stdlib.h>

//Exercicio 4 - Lista 1

int main(){
	
	float area, tijolo;
	float largura = 200, altura = 400; //Centimetros
	float alt = 15, lt = 30, at;

	area = largura * altura;

	at = alt * lt;

	tijolo = area / at;

	printf("A quantidade de tijolos necessarios: %.0f", tijolo);
	
}
