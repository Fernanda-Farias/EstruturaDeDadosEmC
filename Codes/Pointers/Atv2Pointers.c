/* Faça um programa que contenha duas variáveis inteiras. Leia estas variáveis do teclado. Em seguida,
compare seus endereços e exiba o conteúdo do maior endereço.  */

#include <stdio.h>

int main () {

    int priNum, segNum;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &priNum);
    printf("Digite o segundo numero: ");
    scanf("%d", &segNum);

    printf("\nO endereco do primeiro numero eh: %p", &priNum);
    printf("\nO endereco do segundo numero eh: %p", &segNum);

    if (&priNum > &segNum) {
        printf("\nO conteudo do maior ponteiro eh: %d", priNum);
    } else if (&priNum < &segNum) {
        printf("\nO conteudo do maior numero eh: %d", segNum);
    } else {
        printf("\nOcorreu um erro ao comparar os enderecos de memoria.");
    }
    return 0;
}