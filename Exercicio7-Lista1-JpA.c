#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, maior = 20;
    printf("Insira um numero: ");
    scanf(" %d", &num);

    if(num > maior){
        printf("Esta no intervalo apropriado");
    } else {
        printf("Nao esta no intervalo apropriado");
    }

    return 0;

}
