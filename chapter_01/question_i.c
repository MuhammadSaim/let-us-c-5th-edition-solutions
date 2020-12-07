#include <stdio.h>

int main(){

    // declaring the variable
    int number, first_digit, last_digit, sum;

    // get 4 digit number from user
    printf("Enter 4 digit number: ");
    scanf("%d", &number);


    /**
     * 
     * find the last digit from the 4 digit number
     * mod the number with 10 and we will get the 
     * last digit from the 4 digit number suppose 
     * we have 4 digit number 1234 and we get 4 
     * 
     */
    last_digit = (number % 10);


    /**
     * 
     * find the first digit number from the 
     * right so divided by 1000 and get the 
     * last digit from the right which will be the 
     * 1st from the left
     * 
     */
    first_digit = (number / 1000);

    // now simply sum of the first and last digits of the number
    sum = first_digit + last_digit;

    // outputing the values
    printf("Sum of 2 digits 1st and last is: %d", sum);

    return 0;
}