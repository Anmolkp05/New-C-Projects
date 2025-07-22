
#include <stdio.h>
#include <math.h>  // math functions aur M_PI ke liye include kiya hai

int main() {
    float radius, area;  // radius aur area store karne ke liye variables

    // user se radius input lena hai
    printf("Enter Radius of a Circle: ");
    scanf("%f", &radius);

    // area ka formula use karna hai: pi * r * r
    area = M_PI * radius * radius;

    // area ko print karna hai
    printf("Area Of a Circe is : %.2f\n", area);

    return 0;
}
