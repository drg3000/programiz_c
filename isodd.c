#include <stdio.h>

int main() {

int number;
printf("Input number to check: ");
scanf("%d", &number);

(number % 2 == 0) ? printf("The number is Even") : printf("The number is Odd");

return 0;

}