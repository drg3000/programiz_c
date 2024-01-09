#include <stdio.h>
int main() {

    int age = 10;
    printf("Age: %d", age);

    double number = 12.45; // doouble is 8 bytes and can store floating point num w/ more precision
    //double var stores nums up to 6 spaces
    printf("\ndouble = %lf", number);

    printf("\ndouble = %.2lf", number); //specifies how many decimals to print (level of precision)

    float number1 = 10.9f; //f indicates it's a float number, not a double
    printf("\ndouble = %f", number1);
    printf("\ndouble = %.1f", number1);

    double numex = 5.5e6;
    printf("\ndouble = %lf", numex);

    char character = 'z'; //use single ' for char data
    printf("\n%c", character);
    printf ("\n %d", character);// chars are still stored as a int 

    printf( "\nint size = %zu", sizeof(age));
    printf( "\n double size = %zu", sizeof(number));




    return 0;



}