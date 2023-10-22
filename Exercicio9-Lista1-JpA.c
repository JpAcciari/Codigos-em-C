#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Insira um numero: ");
    scanf(" %d", &num);

    if(num < 6 || num > 9){
        printf("Esta no intervalo apropriado");
    } else {
        printf("Nao esta no intervalo apropriado");
    }

    return 0;

}