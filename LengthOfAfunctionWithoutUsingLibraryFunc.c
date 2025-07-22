#include <stdio.h>

// Ye program bina kisi library function ke string ka length nikaalega
int main() {
    char str[100];
    int i = 0;

    // String input lena
    printf("Enter a string: ");
    scanf("%s", str);

    // Length calculate karna
    while(str[i] != '\0') {
        i++;
    }

    printf("Length of the string: %d\n", i);
    return 0;
}
