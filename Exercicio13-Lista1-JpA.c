#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[200];
    int intervalo, pos, count = 0;

    for(pos = 0; pos < 200; pos++){
        printf("Insira os numeros: ");
        scanf(" %d", &vet[pos]);
    }

    for(pos = 0; pos < 200; pos++){
        if(vet[pos] < 20 || vet[pos] > 30){
            count += 1;

        }
    }

        printf("Quantidade de numeros fora do intervalo: %d ", count);

    return 0;
}