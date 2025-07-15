#include <stdio.h>

int main() {
    int a, b;
    // Do numbers input karo
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Bada number find karo
    if(a > b)
        printf("%d is largest\n", a);
    else if(b > a)
        printf("%d is largest\n", b);
    else
        printf("Both numbers are equal\n");

    return 0;
}
