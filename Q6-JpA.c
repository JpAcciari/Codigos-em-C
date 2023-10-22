#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int pos;
	int vet[10];
	
	for(pos = 0; pos < 10; pos++){
		vet[pos] = 2;
		while((vet[pos] % 2)== 0){
			printf("Digite o %d impar: ", pos+1);
			scanf("%d", &vet[pos]);
		}
	}
	
	for(pos = 0; pos < 10; pos++){
		printf(" %d\n", vet[pos]);
	}
	
	
}
