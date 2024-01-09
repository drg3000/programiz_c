#include <stdio.h>

int main() {

    int count = 1;

    do { //unlike while loop, do while look executes at least once even if condition is false because
    // the condition check happens after first loop

        printf("%d\n", count );
        count = count + 1;
        
    } while (count <= 5);


 return 0; 

}
