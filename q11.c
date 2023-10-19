#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int X[N], Y[N];
    int M[N][N];

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        X[i] = rand() % N;
        Y[i] = rand() % N;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            M[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        M[X[i]][Y[i]]++;
    }

    printf("X = [");
    for (int i = 0; i < N; i++) {
        printf("%d", X[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Y = [");
    for (int i = 0; i < N; i++) {
        printf("%d", Y[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("M (coocorrências):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
