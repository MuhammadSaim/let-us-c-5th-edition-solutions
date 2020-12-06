#include <stdio.h>

int main(){

    // declaring the variables
    int length, breadth, radius, area_of_ractangle, parameter_of_rectangle;
    float area_of_circle, circumference_of_circle;


    // input length of the rectangle
    printf("Enter length of a rectangle: ");
    scanf("%d", &length);

    // input breadth of the rectangle
    printf("Enter breadth of a rectangle: ");
    scanf("%d", &breadth);

    // input radius of the circle
    printf("Enter radius of a circle: ");
    scanf("%d", &radius);


    // area of rectangle a = length * breadth
    area_of_ractangle = length * breadth;

    // parameter of rectangle p = 2 * (length * breadth)
    parameter_of_rectangle = 2 * (length * breadth);

    // area of the circle a = PI * radius * radius => PI = 3.14
    area_of_circle = 3.14 * radius * radius;

    // circumference of circle c = 2 * PI * radius => PI = 3.14
    circumference_of_circle = 2 * 3.14 * radius;


    // output the values
    printf("Area of rectangle => %d\n", area_of_ractangle);
    printf("Parameter of rectangle => %d\n", parameter_of_rectangle);
    printf("Area of circle => %.2f\n", area_of_circle);
    printf("Circumference of circle => %.2f\n", circumference_of_circle);


    return 0;
}