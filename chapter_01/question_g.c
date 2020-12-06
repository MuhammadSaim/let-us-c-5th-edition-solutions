#include <stdio.h>

int main(){

    // declaring variables
    int num, sum, digit_1, digit_2, digit_3, digit_4, digit_5;


    // inputing value of 5 digit number
    printf("Enter 5 digit number: ");
    scanf("%d", &num);

    /**
     * So fist of all we start from right to left 
     * 
     * Note:
     * all the returning value should be in floats so 
     * we are using int for storing retrurning values 
     * so C atomaticly type cast float to integer and 
     * we get just before part of the decimal integer.
     * 
     */

    /**
     * 
     * for last digit of the number just get a mod with 10 
     * suppose we have number 12345 when we get the mod with 10 it will return 5
     * which will be the last digit in our inputed number
     * 
     */
    digit_1 = (num % 10);

    /**
     * 
     * for the 2nd digit for the last we have to get mod with 100 and 
     * then divided by 10 suppose we have same 12345 number and if we get mod
     * with 100 and divided by 10 then waht we get is number 4
     * 
     */
    digit_2 = (num % 100)   / 10;

    /**
     * 
     * for the 3nd digit for the last we have to get mod with 1000 and 
     * then divided by 100 suppose we have same 12345 number and if we get mod
     * with 1000 and divided by 100 then waht we get is number 3
     * 
     */
    digit_3 = (num % 1000)  / 100;

    /**
     * 
     * for the 4nd digit for the last we have to get mod with 10000 and 
     * then divided by 1000 suppose we have same 12345 number and if we get mod
     * with 10000 and divided by 1000 then waht we get is number 2
     * 
     */
    digit_4 = (num % 10000) / 1000;

    /**
     * 
     * for the last and the 5th digit we have to divided by 10000 it will return the
     * 1st digit form the last which suppose to be 1
     * 
     */
    digit_5 = (num / 10000);

    // sum the digits now
    sum = digit_1 + digit_2 + digit_3 + digit_4 + digit_5;

    // out putting the values
    printf("Sum of the 5 digits number is: %d", sum);

    return 0;
}