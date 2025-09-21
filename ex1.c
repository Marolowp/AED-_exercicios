#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array;
    array = (int *)malloc(5 * sizeof(int));

    if (array == NULL){
        printf("Não foi possivel alocar memória.");
        return 1;
    }

    printf("Digite 5 números inteiros.\n");

    for (int i = 0; i < 5; i++){
        printf("Número %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("Número %d: %d\n", i+1, array[i]);
    }

    return 0;
}