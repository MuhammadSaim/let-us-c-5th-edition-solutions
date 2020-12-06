#include <stdio.h>

int main(){

    // declaring the variables
    float temp_in_centigrade, temp_in_fahrenheit;

    // inputing temp from the user
    printf("Enter Temprature in Fahrenheit: ");
    scanf("%f", &temp_in_fahrenheit);

    // formula F => C = (F - 32) * 5/9
    temp_in_centigrade = (temp_in_fahrenheit - 32) * 5 / 9;

    // outputing the temprature
    printf("Temprature in Centigrade: %.2f\n", temp_in_centigrade);

    return 0;
}