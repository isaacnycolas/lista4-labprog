#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    int x[n];
    int f[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        x[i] = rand() % n;
    }

    for (int i = 0; i < n; i++) {
        f[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        f[x[i]]++;
    }

    printf("x = [");
    for (int i = 0; i < n; i++) {
        printf("%d", x[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("f = [");
    for (int i = 0; i < n; i++) {
        printf("%d", f[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
