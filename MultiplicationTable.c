#include <stdio.h>

int main() {
    int num, i;

    // number input karenge
    printf("Enter a number: ");
    scanf("%d", &num);

    // table print karenge
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
