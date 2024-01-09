#include <stdio.h>
#include <math.h>

// syntax: dataype arrayName[arraySize]; arraySize is the number of elements the array can store

//int age[5]; //once declared, can't change the data type or size of array (arrays are statically sized)

int main() {

int age[5];

age[0] = 21; //manually asssigning elements to store at given index
age[1] = 29;
age[2] = 25;
age[3] = 32;
age[4] = 17;

printf("%d\n", age[0]);
printf("%d\n", age[1]);
printf("%d\n", age[2]);
printf("%d\n", age[3]);
printf("%d\n", age[4]);

int age1[5];

printf("Enter 5 input values: ");
scanf("%d", &age1[0]);
scanf("%d", &age1[1]);
scanf ("%d", &age1[2]);
scanf ("%d", &age1[3]);
scanf ("%d", &age1[4]);

printf("%d\n", age1[0]);
printf("%d\n", age1[1]);
printf("%d\n", age1[2]);
printf("%d\n", age1[3]);
printf("%d\n", age1[4]);

//changing element value in array
int age3[5] = {21, 29, 25, 32, 17};
age3[2] = 26;
printf("%d", age3[2]);



return 0; 

}

