#include <stdio.h>
#include "igualdade.h"

int main() {
    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("Sao iguais? %d\n", igual(x, y));
    printf("Maior: %d\n", maior(x, y));
    printf("Menor: %d\n", menor(x, y));

    return 0;
}