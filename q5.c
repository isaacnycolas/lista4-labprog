#include <stdio.h>

#define TAM 50

int main() {
    char input[TAM]; 

    printf("Digite uma palavra: ");
    scanf("%s", input);

    char *ptr = input; 
    int tamanho = 0;

    while (*ptr != '\0') {
        tamanho++;
        ptr++;
    }

    printf("O tamanho da palavra é: %d\n", tamanho);

    return 0;
}
