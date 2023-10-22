#include <stdlib.h>
#include <stdio.h>

int main(){
    int dimensao = 800;
    float lotes;

    printf("Insira a quantidade de lotes que deseja: ");
    scanf(" %f", &lotes);


    printf("O tamanho da frente de cada lote eh de: %.2fm", dimensao / lotes);
}