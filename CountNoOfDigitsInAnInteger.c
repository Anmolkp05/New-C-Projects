#include <stdio.h>

// Ye program count karega ki number me kitne digits hain
int main() {
    int num, count = 0;

    // Number input lena
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Agar number 0 hai to usme ek digit hoti hai
    if(num == 0) {
        count = 1;
    } else {
        while(num != 0) {
            num = num / 10;  // Har step me ek digit hata rahe hain
            count++;
        }
    }

    printf("Number of digits = %d\n", count);
    return 0;
}
