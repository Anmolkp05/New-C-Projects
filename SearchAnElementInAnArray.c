#include <stdio.h>

// Ye program linear search ka use karke array me element dhoondhega
int main() {
    int arr[100], n, i, key, found = 0;

    // Array ka size lena
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Elements input lena
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Search karne wala element lena
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found in array.\n");

    return 0;
}
