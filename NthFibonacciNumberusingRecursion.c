#include <stdio.h>

// Ye program nth Fibonacci number find karega using recursion
int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    if(n < 0)
        printf("Invalid input.\n");
    else
        printf("%dth Fibonacci number = %d\n", n, fibonacci(n));

    return 0;
}
