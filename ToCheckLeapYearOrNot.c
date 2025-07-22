#include <stdio.h>

int main() {
    int year;

    // year input karenge
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year check karne ka rule apply karenge
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is not a Leap Year\n", year);
    }

    return 0;
}
