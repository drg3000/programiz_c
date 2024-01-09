#include <stdio.h>

int main() {

    int number;
    int count = 15;
    printf("Enter number: ");
    scanf("%d", &number);

    do { //unlike while loop, do while look executes at least once even if condition is false because
    // the condition check happens after first loop :D
     int product = number * count; 

        printf("\n%d*%d = %d", number, count, product);
        count = count - 1;
        
    } while (count >= 0);


 return 0; 

}
