// Add two matrices.
#include <stdio.h>
int main() {
    int x[50][50], y[50][50], z[50][50];
    int i, j, row, col;

    // Taking rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // Print first matrix
    printf("\nFirst Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &y[i][j]);
        }
    }

    // Print second matrix
    printf("\nSecond Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%4d", y[i][j]);
        }
        printf("\n");
    }

    // Add two matrices
    printf("\nSum of Matrices:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            z[i][j] = x[i][j] + y[i][j];
            printf("%4d", z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
