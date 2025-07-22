#include <stdio.h>

// Ye program recursion ka use karke factorial calculate karega
int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);  // Recursion use ho raha hai
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial = %d\n", factorial(num));

    return 0;
}
