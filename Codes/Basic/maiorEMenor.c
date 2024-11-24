#include <stdio.h>
/* Faça um programa que leia 10 números e escreva o maior e o menor valor lido.*/
int main() {
    int i, numero, maior = -9999, menor = 9999;

    for(i=1; i<=10; i++) {
        printf("Informe o %d numero:", i);
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        } else if (numero < menor) {
            menor = numero;
        }
    }
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d", menor);
    return 0;
}