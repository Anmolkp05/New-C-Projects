#include <stdio.h>

// Ye program 1 se 100 tak ke sabhi prime numbers print karega
int main() {
    int i, j, isPrime;

    printf("Prime numbers from 1 to 100 are:\n");

    for(i = 2; i <= 100; i++) {
        isPrime = 1;  // Assume karo ki number prime hai

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;  // Agar divide ho gaya to prime nahi hai
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);  // Agar prime hai to print karo
        }
    }

    printf("\n");
    return 0;
}
