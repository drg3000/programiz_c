#include <stdio.h>
#include <math.h>


int main() {

int age[5];
printf("enter 5 ages" );

for(int i = 0; i < 5; ++i){

    scanf("%d", &age[i]);
}

for (int i = 0; i < 5; i++)
{
    printf("age is %d\n", age[i] );

}


return 0; 

}

