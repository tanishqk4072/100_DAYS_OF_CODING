//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int a[50][50];
    printf("Enter the matrix elements:\n");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");
    for (int s = 0; s <= n + m - 2; s++) {  
        for (int i = 0; i < n; i++) {
            int j = s - i;
            if (j >= 0 && j < m) {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
