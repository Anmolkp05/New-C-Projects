#include <stdio.h>

// Ye program do matrices ka multiplication karega
int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;

    // Pehli matrix ka size lena
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Dusri matrix ka size lena
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication tabhi possible hai jab c1 == r2
    if(c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    // Pehli matrix input karna
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Dusri matrix input karna
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Result matrix initialize karna 0 se
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplication karna
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Result print karna
    printf("Product of the matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
