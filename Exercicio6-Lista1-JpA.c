#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, menor = 10;
    printf("Insira um numero: ");
    scanf(" %d", &num);

    if(num < menor){
        printf("Esta no intervalo apropriado");
    } else {
        printf("Nao esta no intervalo apropriado");
    }

    return 0;

}