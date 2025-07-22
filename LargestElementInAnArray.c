#include <stdio.h>

// Ye program array me sabse bada element find karega
int main() {
    int n, i, max;

    // Array ka size lena
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Array ke elements lena
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];  // Pehle element ko max maan lo

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];  // Agar bada element mila to update karo
        }
    }

    printf("Largest element = %d\n", max);
    return 0;
}
