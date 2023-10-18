#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr, *ptr2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    ptr = &num1; 
    ptr2 = &num2; 

    printf("Valores originais: primeiro número = %d, segundo número = %d\n", num1, num2);

    int temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;

    printf("Valores invertidos: primeiro número = %d, segundo número = %d\n", num1, num2);

    return 0;
}