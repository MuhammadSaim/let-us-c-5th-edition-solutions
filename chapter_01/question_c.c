#include <stdio.h>

int main(){

    // declaring variables
    int subject_1, subject_2, subject_3, subject_4, subject_5, aggrigate_marks;
    float average;

    // inputing value for subject 1
    printf("Marks of subject #01: ");
    scanf("%d", &subject_1);

    // inputing value for subject 2
    printf("Marks of subject #02: ");
    scanf("%d", &subject_2);

    // inputing value for subject 3
    printf("Marks of subject #03: ");
    scanf("%d", &subject_3);

    // inputing value for subject 4
    printf("Marks of subject #04: ");
    scanf("%d", &subject_4);

    // inputing value for subject 5
    printf("Marks of subject #05: ");
    scanf("%d", &subject_5);

    // calculate the aggrigate marks
    aggrigate_marks = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;

    // find percentage of the student
    average = (aggrigate_marks * 100) / 500;

    // outputing all the variables 
    printf("Aggrigate marks : %d\n", aggrigate_marks);
    printf("Average : %.2f\n", average);

    return 0;
}