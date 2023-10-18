#include <stdio.h>

int main() {
    int numero;
    int menor = 0;
    int *ptr_menor = &menor;

    while (1) {
        printf("Digite um número (para encerrar, digite 0): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (*ptr_menor == 0 || numero < *ptr_menor) {
            *ptr_menor = numero; 
        }

        printf("Menor valor fornecido até agora: %d\n", *ptr_menor);
    }

    if (*ptr_menor == 0) {
        printf("Nenhum número foi fornecido ou todos os números fornecidos foram zero.\n");
    } else {
        printf("O menor valor fornecido foi: %d\n", *ptr_menor);
    }

    return 0;
}
