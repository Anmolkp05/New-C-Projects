#include <stdio.h>

int main() {
    char ch;

    // character input karenge
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // vowel ya consonant check karenge
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel\n", ch);
    } else {
        printf("%c is a Consonant\n", ch);
    }

    return 0;
}
