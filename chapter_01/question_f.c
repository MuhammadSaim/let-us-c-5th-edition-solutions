#include <stdio.h>


int main(){

    // declaring variables
    int c, d, temp;

    // inputing 1st number from user
    printf("Enter 1st number: ");
    scanf("%d", &c);

    // inputing 2nd number from user
    printf("Enter 2nd number: ");
    scanf("%d", &d);


    // interchange values

    // first step put value of c variable into temp 
    temp = c;
    // now put d value in c
    c = d;
    // final step put temp value into d
    d = temp;

    // outputing values
    printf("Value of 1st variable: %d\n", c);
    printf("Value of 2nd variable: %d\n", d);

    return 0;
}