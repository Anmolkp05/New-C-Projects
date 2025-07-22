#include <stdio.h>

// Ye program pointers ka use karke do numbers ko swap karega
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);  // Address pass kar rahe hain function ko

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
