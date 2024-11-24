#include <stdio.h>
/* Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo
caractere sempre em maiúsculo.  */

char saida (char minusculo) {
    char maiusculo = (int)minusculo - 32;
    return maiusculo;
}
int main() {
    char entrada;

    printf("Digite uma letra: ");
    scanf("%c", &entrada);

    printf("A letra maiuscula e: %c", saida(entrada));
    return 0;
}