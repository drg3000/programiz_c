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
    int y = 10;
    int z = 4 / 2 + 6 * 5 - 1;// will follow normal math order of operations, can add parenthesis to make it clearer
    int result = x / 8;
    double xx = 12.0;
    double resultd = xx / 8.00;
    int resultdd = x % 8;


    printf("%d", result); 
    //printf("\n%d", x+8);
    printf("\n%d", ++x); // prefix does icrement returns value
    printf("\n%d", --x); 
    printf("\n original x: %d", x); 

    printf("\n%d", y++); // postfix returns value, then does increment
    printf("\n%d", y--); 
    printf("\n original y: %d", y); 

    printf("\n%d", z); 
 

   printf("\n%lf", resultd);
   printf("\n%.2lf", resultd);
   printf("\n%d", resultdd);



    return 0;
}