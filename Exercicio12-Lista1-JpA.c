#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, res = 0;
    int pos = 0;

    printf("Insira o 1 numero: ");
    scanf(" %d", &x);
    printf("Insira o 2 numero: ");
    scanf(" %d", &y);

    for(pos = 1; pos <= y; pos++){
        res += x;
    } 

    printf("O resultado de %d x %d = %d ", x, y, res);

    return 0;

}