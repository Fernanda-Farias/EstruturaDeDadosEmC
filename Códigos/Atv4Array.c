#include <stdio.h>
/*Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
possuírem valores negativos. */

int main() {
    int numeros[10], i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    printf("Os numeros do array sao: ");
    for (i = 0; i < 10; i++) {
        printf("%d, ", numeros[i]);
    }
    return 0;
}