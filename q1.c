#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    sum = num1 + num2;

    ptr = &sum;

    printf("A soma de %d e %d é: %d e o endereço é: %p\n", num1, num2, *ptr, ptr);
    return 0;
}
