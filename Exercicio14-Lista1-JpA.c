#include <stdio.h>
#include <stdlib.h>

//Somando sequencia numerica padrão

int main(){
    int pos;
    int valor = 0;
    
    for(pos = 5; pos <= 2002; pos++){
        valor += pos;
    }

    printf("O valor eh: %d", valor);

    return 0;
}