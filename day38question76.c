// Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int x[50][50];
    int i, j, row, col;

    // Taking rows and column values
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("Symmetric matrix must be square!\n");
        return 0;
    }

    // Input matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (x[i][j] != x[j][i]) {
                printf("This is NOT a symmetric matrix!!\n");
                return 0;
            }
        }
    }

    printf("This is a symmetric matrix!!\n");
    return 0;
}
