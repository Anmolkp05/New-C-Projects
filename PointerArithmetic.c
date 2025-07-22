#include <stdio.h>

// Ye program pointer arithmetic dikhata hai
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer ko array ke start me point karna

    printf("Pointer Arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("Value at ptr + %d = %d\n", i, *(ptr + i));  // Pointer se access karna
    }

    return 0;
}
