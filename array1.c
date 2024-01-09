#include <stdio.h>
#include <math.h>

// syntax: dataype arrayName[arraySize]; arraySize is the number of elements the array can store

//int age[5]; //once declared, can't change the data type or size of array (arrays are statically sized)

int main() {

int age[5] = {21, 29, 25, 32, 17}; // you can ommit the array size, compiler will determine size based on # of elements
// to access element inside array arrayName[index] -> 0-based index arrays, so first element is index 0

printf("%d\n", age[0]);
printf("%d\n", age[1]);
printf("%d\n", age[2]);
printf("%d\n", age[3]);
printf("%d\n", age[4]);

return 0; 

}

