#include <stdio.h>
#include <stdlib.h>

int main(){
    int id1, id2;

    printf("Insira as duas idades: ");
    scanf(" %d" " %d", &id1, &id2);

    if(id1 < id2){
        printf(" %d , %d\n", id1, id2);
    } else {
        printf(" %d , %d\n", id2, id1);
    }

    return 0;

}