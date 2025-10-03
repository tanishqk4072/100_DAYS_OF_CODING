// Check if the elements on the diagonal of a matrix are distinct.
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
    printf("Enter matrix elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // Check distinctness of main diagonal
    for (i = 0; i < row; i++) {
        for (j = i + 1; j < row; j++) {
            if (x[i][i] == x[j][j]) {
                printf("Main diagonal elements are not distinct!\n");
                return 0;
            }
        }
    }

    // Check distinctness of secondary diagonal
    for (i = 0; i < row; i++) {
        for (j = i + 1; j < row; j++) {
            if (x[i][row - i - 1] == x[j][row - j - 1]) {
                printf("Secondary diagonal elements are not distinct!\n");
                return 0;
            }
        }
    }

    printf("Both diagonals have distinct elements.\n");
    return 0;
}
