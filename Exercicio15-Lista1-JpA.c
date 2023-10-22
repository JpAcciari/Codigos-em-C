#include <stdio.h>
#include <stdlib.h>

//Somando sequencia numerica pulando 2 numeros

int main(){
    int pos;
    int valor = 0;
    
    for(pos = 4; pos <= 98; pos+=2){
        valor += pos;
    }

    printf("O valor eh: %d", valor);

    return 0;
}