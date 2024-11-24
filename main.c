/* 2. Make a program initially allocate a vector with 3 integers, ask the user how many values he
want to inform, use REALLOC if it is more than 3 values, read and present the values.  */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, *array, qnt = 3;
    array = (int*)calloc(qnt, sizeof(int));

    if (!array) {
        printf("Error: Unallocated memory!");
        break;
    }

    printf("Who many values you want? ");
    scanf("%d", &qnt);

    if (qnt > 3) {
        array = (int*)realloc(array, sizeof(qnt));
    }

    printf("Informe os valores do array: ");
    for (i = 0; i < qnt; i++) {
        printf("\nValor do Array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Valores do Array: ");
    for (i = 0; i < qnt; i++) {
        printf("%d, ", array[i]);
    }
    return 0;
}