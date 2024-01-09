#include <stdio.h>

int main() {
   

    double number;
    char alphabet;

    printf("Enter input values: ");
    scanf("\n%lf %c", &number, &alphabet);


    printf("\nNumber: %lf", number);
    printf("\nCharacter: %c", alphabet);

    return 0;
}