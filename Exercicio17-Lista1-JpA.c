#include <stdio.h>
#include <stdlib.h>

//Invertendo os numeros do RA

int main(){
    int vet[9], aux[9];

    for(int i = 0; i < 9; i++)
        scanf(" %d", &vet[i]);

    for(int i = 0; i < 9; i++)
        aux[i] = vet[8-i];
    
    for(int i = 0; i < 9; i++){
        vet[i] = aux[i];
        printf("%d ", vet[i]);
    }
}