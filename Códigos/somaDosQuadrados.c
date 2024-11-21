#include <stdio.h>

int main(){
    int i, num, quadrado, soma= 0;

    for (i = 1; i <= 3; i++){
        printf("Digite o %d numero:", i);
        scanf("%d", &num);
        quadrado = num * num;
        soma += quadrado;

    }

    printf("A soma e igual a: %d", soma);
    return 0;
}
