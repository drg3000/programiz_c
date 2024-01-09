#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {

    char alpha = 'e';
    char upper = toupper(alpha);
    
    printf("%c", upper);

    char lower = tolower(upper);
    printf("\n %c", lower);
 
 return 0; 

}

