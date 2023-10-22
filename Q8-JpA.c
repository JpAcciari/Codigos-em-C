#include <stdio.h>
#include <stdlib.h>

int main(void){
	int vet[10];
	int i;
	int soma, media = 6;
	
	for(i = 0; i < 10; i++){
		printf("Digite o %d numero: ", i + 1);
		scanf(" %d", &vet[i]);
		
		soma = soma + vet[i];
	}

	for(i = 0; i < 10; i++){
		if(vet[i] > media){
			printf("Os numeros acima da media sao: %d\n", vet[i]);
		}
	}
	
	return 0;
}



