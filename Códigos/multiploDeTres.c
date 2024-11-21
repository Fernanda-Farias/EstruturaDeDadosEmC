#include <stdio.h>
/* Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números
maiores que 0 */
int main() {
    int i;

    printf("Os cinco primeiros múltiplos de 3 são:\n");

    for (i = 1; i <= 5; i++) {
        printf("%d ", i * 3);
    }

    printf("\n");
    return 0;
}