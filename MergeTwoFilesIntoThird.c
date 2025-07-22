#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    // Pehli file kholna
    f1 = fopen("file1.txt", "r");
    if (f1 == NULL) {
        printf("file1.txt nahi khul paayi\n");
        return 1;
    }

    // Doosri file kholna
    f2 = fopen("file2.txt", "r");
    if (f2 == NULL) {
        printf("file2.txt nahi khul paayi\n");
        fclose(f1);
        return 1;
    }

    // Teesri file jisme dono merge honge
    f3 = fopen("merged.txt", "w");

    // file1 se data read karke file3 mein likhna
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }

    // file2 se bhi same karna
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    printf("Files successfully merge ho gayi.\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
