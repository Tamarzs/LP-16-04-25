#include <stdio.h>

int soma () {
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    return num1 + num2;
}

int main() {
    int num = soma();
    printf("Resultado: %d", num);
    return 0;

}
