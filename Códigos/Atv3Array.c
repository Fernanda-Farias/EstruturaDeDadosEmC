#include <stdio.h>
/* 2. Faça um programa que leia um vetor de 10 posições. Conte e mostre quantos valores pares ele possui. */

int main() {
    int numeros[10], i, cont = 0, pares[10];

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares[cont] = numeros[i];
            cont++;
        }
    }

    printf("O vetor possui %d numeros pares", cont);
    printf("\nEsses numeros sao: ");
    for (i = 0; i < cont; i++) {
        printf("%d , ", pares[i]);
    }
    return 0;
}
