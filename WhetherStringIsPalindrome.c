#include <stdio.h>
#include <string.h>

// Ye program check karega ki string palindrome hai ya nahi
int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    // String input lena
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;  // Match nahi ho raha to palindrome nahi hai
            break;
        }
    }

    if(isPalindrome)
        printf("String is a palindrome.\n");
    else
        printf("String is not a palindrome.\n");

    return 0;
}
