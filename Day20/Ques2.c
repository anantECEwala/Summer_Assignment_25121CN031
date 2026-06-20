#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];  

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                printf("The matrix is not symmetric.\n");
                return 0;  
            }
        }
    }

    printf("The matrix is symmetric.\n");
    return 0;
}
