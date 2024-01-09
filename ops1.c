//operators:
//  addition +
// subtraction -
// multiplication *
//dividsion /
// remainder %
// increment ++ (add1)
// decrement -- (sub1)

#include <stdio.h>

int main() {
   

    
    int x = 12;
    int result = x + 8;
    int y = 8;

    printf("%d", result); 
    printf("\n%d", x+8);

    double x1 = 12.57;
    double resultd = x1 + 8.67;
    double resultdd = x1 + y;

    printf("\n%lf", resultd);
    printf("\n%.2lf", resultd);
    printf("\n%.2lf", resultdd);



    return 0;
}