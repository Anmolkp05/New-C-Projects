#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // number input karenge
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // factorial calculate karenge
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }

    // result print
    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
