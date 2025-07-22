#include <stdio.h>

// Ye program array se ek element delete karega
int main() {
    int arr[100], n, i, pos;

    // Array ka size lena
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Array ke elements lena
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Position lena jahan se delete karna hai
    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    // Elements ko shift karna left side me
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Size kam ho gaya

    // Updated array print karna
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
