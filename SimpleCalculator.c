#include <stdio.h>

// Ye program ek simple calculator banata hai using switch-case
int main() {
    char op;
    float num1, num2, result;

    // User se operator aur numbers lena
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Switch case ke through operation karna
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Divide by zero\n");
                return 1;
            }
            printf("Result = %.2f\n", result);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
