#include <stdio.h>

int main() {
    int a, b, temp;
    // Do numbers input karlo
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap karne ke liye temporary variable use karenge
    temp = a;
    a = b;
    b = temp;

    // Result print karo
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
