/* Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe
as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação */

#include <stdio.h>

void modificarNumero(int *numeroNovo, float *numFloatNovo, char *borboletaNovo) {
    *numeroNovo = *numeroNovo + 1;
    *numFloatNovo = *numFloatNovo + 2.3;
    *borboletaNovo = 'B';

    printf("\n\nDepois de modificar: ");
    printf("\nO numero eh igual a %d, seu local eh %p", *numeroNovo, &numeroNovo);
    printf("\nO numero real eh igual a %f, seu local eh %p", *numFloatNovo, &numFloatNovo);
    printf("\nO caracter eh igual a %c, seu local eh %p", *borboletaNovo, &borboletaNovo);
}

int main() {

    int numero = 10;
    float numFloat = 10.5;
    char borboleta = 'b';

    int *pNumero = &numero;
    float *pNumFloat = &numFloat;
    char *pBorboleta = &borboleta;

    printf("\nAntes de modificar: ");
    printf("\nO numero eh igual a %d, seu local eh %p", numero, &numero);
    printf("\nO ponteiro do pNumero eh igual a %d, seu local eh %p", *pNumero, &pNumero);
    printf("\nO numero real eh igual a %f, seu local eh %p", numFloat, &numFloat);
    printf("\nO ponteiro do pNumFloat eh igual a %f, seu local eh %p", *pNumFloat, &pNumFloat);
    printf("\nO caracter eh igual a %c, seu local eh %p", borboleta, &borboleta);
    printf("\nO ponteiro do pBorboleta eh igual a %c, seu local eh %p", *pBorboleta, &pBorboleta);


    modificarNumero(pNumero, pNumFloat, pBorboleta);

    printf("\n\nNa funcao Main: ");
    printf("\nO numero eh igual a %d, seu local eh %p", numero, &numero);
    printf("\nO ponteiro do pNumero eh igual a %d, seu local eh %p", *pNumero, &pNumero);
    printf("\nO numero real eh igual a %f, seu local eh %p", numFloat, &numFloat);
    printf("\nO ponteiro do pNumFloat eh igual a %f, seu local eh %p", *pNumFloat, &pNumFloat);
    printf("\nO caracter eh igual a %c, seu local eh %p", borboleta, &borboleta);
    printf("\nO ponteiro do pBorboleta eh igual a %c, seu local eh %p", *pBorboleta, &pBorboleta);

    return 0;
}