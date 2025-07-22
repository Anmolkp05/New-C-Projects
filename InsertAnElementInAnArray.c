#include <stdio.h>

// Ye program array me ek element insert karega
int main() {
    int arr[100], n, i, pos, value;

    // Array ka size lena
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Array ke elements lena
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Position aur value lena jo insert karni hai
    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Elements ko shift karna right side me
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;  // New value insert karna
    n++;  // Size badh gaya

    // Updated array print karna
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
