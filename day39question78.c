//Find the sum of main diagonal elements for a square matrix
#include <stdio.h>
int main() {
    int x[50][50];
    int i, j, row, col;

start:
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("Please enter a square matrix.\n");
        goto start;
    }

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    int sum = 0;

    // Sum of both diagonals
    for (i = 0; i < row; i++) {
        sum += x[i][i];               // main diagonal
        sum += x[i][row - 1 - i];     // secondary diagonal
    }

    // If matrix size is odd, subtract middle element once
    if (row % 2 != 0) {
        sum -= x[row / 2][row / 2];
    }

    printf("The sum of the diagonals is: %d\n", sum);

    return 0;
}
