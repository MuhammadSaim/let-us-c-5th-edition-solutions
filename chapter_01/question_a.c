#include <stdio.h>

int main() {

    // net salary of the user
    int salary;
    // after deduction gross_salary will store in this
    int gross_salary;

    // dearnes and house_rent allowance
    int dearnes, house_rent;

    // get an input from user
    printf("Enter your salary: ");
    scanf("%d", &salary);

    // dearnes
    dearnes = salary * .4;
    // house_rent
    house_rent = salary * .4;

    gross_salary = salary - dearnes;
    gross_salary = gross_salary - house_rent;

    // outputtin the gross salary
    printf("\nYour Gross Salary will be: %d", gross_salary);

    return 0;
}
