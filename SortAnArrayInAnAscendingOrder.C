#include <stdio.h>

// Ye program array ko ascending order me sort karega (Bubble Sort)
int main() {
    int n, i, j, temp;

    // Array ka size lena
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Array ke elements lena
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting (Bubble sort method)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap karna
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Sorted array print karna
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
