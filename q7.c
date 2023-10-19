#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira palavra: ");
    gets(str1);

    printf("Digite a segunda palavra: ");
    gets(str2); 

    char *result = (char *)malloc(strlen(str1) + strlen(str2) + 1);

    if (result == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    char *p1 = str1;
    char *p2 = str2;
    char *pResult = result;

    while (*p1) {
        *pResult = *p1;
        pResult++;
        p1++;
    }

    while (*p2) {
        *pResult = *p2;
        pResult++;
        p2++;
    }

    *pResult = '\0';

    printf("Concatenação das palavras: %s\n", result);

    free(result);

    return 0;
}
