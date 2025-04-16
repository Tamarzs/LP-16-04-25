#include "stdio.h"

int valor() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int num = valor();
    printf("Número: %d\n", num);
    return 0;
}