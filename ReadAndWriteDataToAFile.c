#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // File mein data likhna
    fp = fopen("file.txt", "w");  // Write mode mein file khol rahe hain
    if (fp == NULL) {
        printf("File nahi khul paayi!\n");
        return 1;
    }

    printf("File mein likhne ke liye kuch text daaliye: ");
    fgets(data, 100, stdin);
    fputs(data, fp);
    fclose(fp);  // File band karni zaroori hai

    // File se data padhna
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("File nahi khul paayi!\n");
        return 1;
    }

    printf("\nFile se padha gaya data:\n");
    while (fgets(data, 100, fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);
    return 0;
}
