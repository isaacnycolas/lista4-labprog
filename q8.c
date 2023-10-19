#include <stdio.h>

int main() {
    char palavra[50];
    char caractere;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite o caractere que deseja buscar: ");
    scanf(" %c", &caractere);

    char *ptr = palavra;

    while (*ptr != '\0') {
        if (*ptr == caractere) {
            printf("O caractere '%c' foi encontrado na posição %ld da palavra.\n", caractere, ptr - palavra);
            return 0;
        }
        ptr++;
    }

    printf("O caractere '%c' não foi encontrado na string.\n", caractere);
    return 0;
}