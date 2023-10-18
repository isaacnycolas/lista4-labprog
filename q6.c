#include <stdio.h>

#define TAM 50

int main() {
    char source[TAM];
    char copy[TAM]; 
    char *src_ptr = source;
    char *dest_ptr = copy; 

    printf("Digite uma palavra para copiar: ");
    scanf("%s", source);

    while (*src_ptr != '\0') {
        *dest_ptr = *src_ptr;
        src_ptr++;
        dest_ptr++;
    }

    *dest_ptr = '\0';

    printf("A palavra de origem é: %s\n", source);
    printf("A palavra copiada é: %s\n", copy);

    return 0;
}
