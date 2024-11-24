#include <stdio.h>

int main(){
    int i;
    float nota, media, soma= 0;

    for (i = 1; i <= 4; i++){
        printf("Informe a %d nota:", i);
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / 4;
    printf("A media aritmetica das notas e igual a: %f", media);
    return 0;
}
