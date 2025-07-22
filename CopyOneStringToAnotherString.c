#include <stdio.h>

// Ye program ek string ko dusri string me copy karega
int main() {
    char str1[100], str2[100];
    int i;

    // Pehli string input lena
    printf("Enter a string: ");
    scanf("%s", str1);

    // Copy process
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';  // Null character add karna zaroori hai

    printf("Copied string: %s\n", str2);
    return 0;
}
