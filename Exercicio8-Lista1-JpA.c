#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Insira um numero: ");
    scanf(" %d", &num);

    if(num > 1 && num < 7){
        printf("Esta no intervalo apropriado");
    } else {
        printf("Nao esta no intervalo apropriado");
    }

    return 0;

}