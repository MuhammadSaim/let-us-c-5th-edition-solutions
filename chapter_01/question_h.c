#include <stdio.h>

int main(){

    // declaring variable
    int number, reverse_number, next_digit, last_digit;

    // taking input from the user
    printf("Enter 5 digit number: ");
    scanf("%d", &number);

    /**
     * 
     * finding the last digit in the number
     * suppose we have five digit number 12345 to get last
     * digit which is 5 get a mod with 10 and we get 5
     * 
     */
    last_digit = number % 10;

    /**
     * 
     * we get the last digit number and save it in the 
     * reverse numer which will be the 1st digit in the reverse order
     * 
     */
    reverse_number = last_digit;

    /**
     * 
     * find the next digit from the left
     * which will be the 2nd from the last in our 
     * case its will be 4 so get a mod with 100 and divided by
     * 10 and we get 4
     * 
     */
    next_digit = (number % 100) / 10;

    /**
     * 
     * we have a next digit now glue with our reverse 
     * number where we have also 5 store in already so we 
     * glue with 5 our reverse number will 54
     * 
     */
    reverse_number = (reverse_number * 10) + next_digit;

    /**
     * 
     * find the next digit from the left
     * which will be the 3rd from the last in our 
     * case its will be 3 so get a mod with 1000 and divided by
     * 100 and we get 3
     * 
     */
    next_digit = (number % 1000) / 100;

    /**
     * 
     * we have a next digit now glue with our reverse 
     * number where we have also 54 store in already so we 
     * glue with 5 our reverse number will 543
     * 
     */
    reverse_number = (reverse_number * 10) + next_digit;

    /**
     * 
     * find the next digit from the left
     * which will be the 4th from the last in our 
     * case its will be 2 so get a mod with 10000 and divided by
     * 1000 and we get 2
     * 
     */
    next_digit = (number % 10000) / 1000;

    /**
     * 
     * we have a next digit now glue with our reverse 
     * number where we have also 543 store in already so we 
     * glue with 5 our reverse number will 5432
     * 
     */
    reverse_number = (reverse_number * 10) + next_digit;

    /**
     * 
     * for the last and the 5th digit we have to divided by 10000 it will return the
     * 1st digit form the last which suppose to be 1
     * 
     */
    next_digit = (number / 10000);

    /**
     * 
     * we have a next digit now glue with our reverse 
     * number where we have also 5432 store in already so we 
     * glue with 5 our reverse number will 54321
     * 
     */
    reverse_number = (reverse_number * 10) + next_digit;

    // outputing the variables
    printf("Your 5 digit number in reverse order is: %d", reverse_number);

    return 0;
}