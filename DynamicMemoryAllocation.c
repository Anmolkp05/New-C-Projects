#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n;

    // User se size lena
    printf("Kitne elements chahiye? ");
    scanf("%d", &n);

    // malloc se memory allocate karna
    arr = (int*)malloc(n * sizeof(int));

    // Check karna ki memory mili ya nahi
    if (arr == NULL) {
        printf("Memory allocate nahi hui.\n");
        return 1;
    }

    // Elements input lena
    printf("%d elements daaliye:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print karna
    printf("Aapke daale gaye elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free karna memory
    free(arr);

    return 0;
}
