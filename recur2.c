#include <stdio.h>
#include <math.h>

int product(int n);

int main() {

int number, result;

printf("Enter a positive integer: ");
scanf("%d", &number);

result = product(number);

printf("product = %d", result);
    
 return 0; 

}

int product(int n) {

    if (n !=0 ){
        //sum() function calls itself
        printf("I am on %d\n", n);
        return n * product(n - 1);
    }
    else {
        return 1;
    }
}

