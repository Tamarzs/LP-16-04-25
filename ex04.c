#include "stdio.h"

int soma() {
    int x;
    int y;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite outro número: ");
    scanf("%d", &y);
    return x + y;
}

int main() {
    int resultado = soma();
    printf("Resultado: %d\n", resultado);
    return 0;
}