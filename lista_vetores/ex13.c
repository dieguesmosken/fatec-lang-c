#include<stdio.h>
#include<stdlib.h>

void getCofactor(int** mat, int** temp, int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int determinant(int** mat, int n) {
    int D = 0;
    if (n == 1)
        return mat[0][0];
    int** temp = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        temp[i] = malloc(n * sizeof(int));
    int sign = 1;
    for (int f = 0; f < n; f++) {
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    for (int i = 0; i < n; i++)
        free(temp[i]);
    free(temp);
    return D;
}

int main() {
    int N;
    printf("Informe o valor de N: ");
    scanf("%d", &N);
    int** mat = malloc(N * sizeof(int*));
    if (mat == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    for (int i = 0; i < N; i++) {
        mat[i] = malloc(N * sizeof(int));
        if (mat[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
    }
    printf("Informe os elementos da matriz:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &mat[i][j]);
    printf("O determinante da matriz é : %d", determinant(mat, N));
    for (int i = 0; i < N; i++)
        free(mat[i]);
    free(mat);
    return 0;
}
