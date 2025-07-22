#include <stdio.h>

int main() {
    int num;

    // user se number input lenge
    printf("Enter a number: ");
    scanf("%d", &num);

    // check karenge even ya odd hai
    if(num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}
