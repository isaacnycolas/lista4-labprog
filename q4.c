#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }

    int vetor_int[tamanho];

    float vetor_float[tamanho];

    printf("Digite os valores inteiros para o vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor_int[i]);
    }

    printf("Digite os valores de float para o vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetor_float[i]);
    }

    printf("Valores e Endereços do Vetor de Inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %d, Endereço: %p\n", vetor_int[i], (void *)&vetor_int[i]);
    }

    printf("Valores e Endereços do Vetor de Ponto Flutuante:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %.2f, Endereço: %p\n", vetor_float[i], (void *)&vetor_float[i]);
    }

    return 0;
}
