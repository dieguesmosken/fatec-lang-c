#include<stdio.h>
#include<stdlib.h>

// Função para calcular o cofator da matriz
void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n) {
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

// Função recursiva para calcular o determinante de uma matriz
int determinant(int mat[N][N], int n) {
    int D = 0;
    if (n == 1)
        return mat[0][0];
    int temp[N][N];
    int sign = 1;
    for (int f = 0; f < n; f++) {
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

int main() {
    printf("Informe o valor de N: ");
    scanf("%d", &N);
    int mat[N][N];
    printf("Informe os elementos da matriz:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &mat[i][j]);
    printf("O determinante da matriz é : %d", determinant(mat, N));
    return 0;
}
