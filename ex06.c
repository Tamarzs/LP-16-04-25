#include <stdio.h>
#include "util.h"

int main() {
    double raio;
    
    printf("Digite o raio: ");
    scanf("%lf", &raio);

    double dia = diametro(raio);
    double cir = circunferencia(raio);
    double are = area(raio);

    printf("Diametro: %.2lf\n", dia);
    printf("Circunferencia: %.2lf\n", cir);
    printf("Area: %.2lf\n", are);

    return 0;
}