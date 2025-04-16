#include <stdio.h>
#include "igualdade.h"

int recebeNumero() {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    return x;
}

int main() {
    int n[3];
    for (int x = 0; x < 3; x++) {
        n[x] = recebeNumero();
    }

    int nMaior = maior(n[0], n[1]);;
    int nMaior2 = maior(nMaior, n[2]);

    printf("Maior de todos: %d\n", nMaior2);
}