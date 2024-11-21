#include <stdio.h>
/* Faça um programa que tenha uma função que dado um valor numérico de entrada, gere e imprima como
saída o número de linhas com pontos de exclamação. */

void soma(int numEntrada) {
    for(int i = 0; i <= numEntrada; i++) {
        printf("%c", 33);
    }
}
int main() {
    int entrada;

    printf("Digite um numero: ");
    scanf_s("%d", &entrada);

    for(int i = 0; i < entrada; i++) {
        printf("%c \n", soma(i));
    }
    return 0;
}
