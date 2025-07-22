#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // number input karenge
    printf("Enter a number: ");
    scanf("%d", &num);

    // number reverse karenge
    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
