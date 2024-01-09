#include <stdio.h>
#include <math.h>


int main() {

double grades[5];
printf("Enter grades for 5 subjects: " );

for(int i = 0; i < 5; ++i){

    scanf("%lf", &grades[i]);
}

for (int i = 0; i < 5; i++)
{
    printf("grade is %lf\n", grades[i]);

}

double sum = 0.0;

for (int i = 0; i < 5; i++){
    printf("i: %d current sum = %lf and grade = %lf\n", i, sum, grades[i]);

    sum = sum + grades[i];
}

printf("sum = %lf", sum);

double average = sum / 5.0;
printf("grades average = %lf", average);

return 0; 

}

