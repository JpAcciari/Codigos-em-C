#include <stdio.h>
#include <stdlib.h>

//Somando sequencia numero de fração

int main(){
    float valor = 0.0;

    for(int i = 5; i <= 100; i++){
        valor += (float)i/(float)(i-1);
    }

    printf("O resultado da serie numero eh: %.3f", valor);
}