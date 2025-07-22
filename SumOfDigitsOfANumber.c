#include <stdio.h>

int main() {
    int num, sum = 0;

    // number input karenge
    printf("Enter a number: ");
    scanf("%d", &num);

    // digits ka sum nikalenge
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
