#include <stdio.h>
/*Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o
maior valor.  */

int maiorValor(int numeros[5]) {
    int maior = -999, i;
    for (i = 0; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    return maior;
}
int main() {
    int numeros[5], i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("O maior numero e: %d", maiorValor(numeros));
}