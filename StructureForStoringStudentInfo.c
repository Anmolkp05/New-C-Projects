#include <stdio.h>

// Student ki info ke liye structure bana rahe hain
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Student ki info input lena
    printf("Roll number daaliye: ");
    scanf("%d", &s.rollNo);

    printf("Naam daaliye: ");
    scanf(" %[^\n]", s.name);  // Full naam lene ke liye

    printf("Marks daaliye: ");
    scanf("%f", &s.marks);

    // Student ki info print karna
    printf("\nStudent ki jaankari:\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Naam: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
