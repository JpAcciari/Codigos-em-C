#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int l1 = 0, l2 = 0, l3 = 0, ang1 = 0, ang2 = 0, ang3 = 0;
    
    printf("Insira o valor dos Lados: ");
    while (1) {
        if (scanf("%d %d %d", &l1, &l2, &l3) == 3) { // Se todas as entradas são números inteiros o programa continua
            break;
        } else {
            printf("Nao insira letras e apenas numeros validos. Digite os três números novamente: ");
            while (getchar() != '\n'); // Limpar o buffer do teclado
        }
    }

    printf("Insira o valor dos Angulos: ");
    while (1) {
        if (scanf("%d %d %d", &ang1, &ang2, &ang3) == 3) { // Se todas as entradas são números inteiros o programa continua
            break;
        } else {
            printf("Nao insira letras e apenas numeros validos. Digite os três números novamente: ");
            while (getchar() != '\n'); // Limpar o buffer do teclado
        }
    }

    printf("\n");

    printf("Lado 1: %d Lado 2: %d Lado 3: %d", l1, l2, l3);

    printf("\n");
    printf("\n");

    printf("Angulo 1: %d Angulo 2: %d Angulo 3: %d", ang1, ang2, ang3);

    printf("\n");

    if(l1 == l2 && l2 == l3){
        printf("\nForma um Triangulo Equilatero\n");
    }else if(l1 == l2 && l1 != l3 || l2 == l3 && l2 != l1 || l1 == l3 && l1 != l2){
        printf("\nForma um Triangulo Isosceles\n");
    }else if(l1 != l2 && l1 != l3 && l2 != l3){
        printf("\nForma um Triangulo Escaleno\n");
    }else if(l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1){
        printf("\nEstes valores nao formam um Triangulo\n");
    }

    return 0;

}