#include <stdio.h>

int main() {

int number;
printf("Enter number between 1 to 7: ");
scanf("%d", &number);

switch (number){
    case 1: 
    case 7:
    printf("Weekend");
    break;

    case 2:
    case 3: 
    case 4: 
    case 5: 
    case 6: 
    printf("Weekday");
    break;

    default:
    printf("Invalid Number"); // can be removed if not needed


}

return 0;

}