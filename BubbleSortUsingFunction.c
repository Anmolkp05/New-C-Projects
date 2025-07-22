#include <stdio.h>

// Ye function bubble sort ka use karke array ko sort karta hai
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Agar agla element chhota hai to swap karo
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Ye function array ko print karta hai
void displayArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n;

    // User se array ka size aur elements lena
    printf("Array ka size daaliye: ");
    scanf("%d", &n);

    printf("%d elements daaliye:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort function call karna
    bubbleSort(arr, n);

    // Sorted array print karna
    printf("Sorted array:\n");
    displayArray(arr, n);

    return 0;
}
