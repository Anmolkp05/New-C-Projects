#include <stdio.h>

// Ye program do numbers ka GCD aur LCM calculate karega
int main() {
    int a, b, i, gcd, lcm;

    // User se do numbers lena
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // GCD find karne ke liye loop
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;  // Jo common factor hai use store karo
        }
    }

    // LCM ka formula: (a * b) / GCD
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
