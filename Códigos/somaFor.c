#include <stdio.h>

int main(){
    int i, num, soma = 0;

    for (i = 1; i <= 3; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);
        soma += num;
    }
    printf("A soma dos numeros e igual a: %d", soma);

}