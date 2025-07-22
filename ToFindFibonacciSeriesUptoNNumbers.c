#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, i;

    // number of terms input karenge
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // fibonacci print karenge
    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
