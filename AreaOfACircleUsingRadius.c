#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>  // math functions aur M_PI ke liye include kiya hai

int main() {
    float radius, area;  // radius aur area store karne ke liye variables

    // user se radius input lena hai
    printf("Circle ka radius daalein: ");
    scanf("%f", &radius);

    // area ka formula use karna hai: pi * r * r
    area = M_PI * radius * radius;

    // area ko print karna hai
    printf("Circle ka area hai: %.2f\n", area);

    return 0;
}
