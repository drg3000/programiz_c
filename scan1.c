#include <stdio.h>

int main() {
    int age;

    printf("Enter input value: ");
    scanf("%d", &age);

    printf("\nAge: %d", age);

    double number;
    char alphabet;

    printf("\nEnter double input: ");
    scanf("%lf", &number);

    printf("\nEnter character input: ");
    scanf("\n%c", &alphabet);

    printf("\nNumber: %lf", number);
    printf("\nCharacter: %c", alphabet);

    return 0;
}