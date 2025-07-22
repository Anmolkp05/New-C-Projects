#include <stdio.h>

// Ye program matrix ka transpose nikalega
int main() {
    int a[10][10], trans[10][10];
    int rows, cols, i, j;

    // Matrix ka size lena
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Matrix ke elements lena
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose calculate karna
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            trans[j][i] = a[i][j];  // Row ko column bana diya
        }
    }

    // Transposed matrix print karna
    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
