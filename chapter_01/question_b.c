#include <stdio.h>


int main(){

    // decalre all of the variables which stores data 
    int distance, meters;
    float feets, inches, centimeters;

    // geting distance values from the user
    printf("Enter the distance between two cities in (KM): ");
    scanf("%d", &distance);

    // because 1KM = 1000 Meters
    meters = distance * 1000;
    // because 1M = 3.2808 feets
    feets = meters * 3.2808;
    // because 1 Feet = 12 Inches
    inches = feets * 12;
    // because 1 IN = 2.52 Centimeters
    centimeters = inches * 2.52;

    // outputing all the variables 
    printf("Distance in KM: %d\n", distance);
    printf("Distance in M:  %d\n", meters);
    printf("Distance in Feets: %.2f\n", feets);
    printf("Distance in Inches: %.2f\n", inches);
    printf("Distance in Centimeters: %.2f\n", centimeters);

    return 0;
}