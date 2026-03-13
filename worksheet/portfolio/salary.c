
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Yahya H Aswat
 * ID: 201961793
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 30000;
    float NI_rate = 9;
    float tax_rate = 25;

    float NI_deduction = (salary*NI_rate)/100;
    float post_NI_deduction = salary - NI_deduction;
    float taxable = post_NI_deduction - 12500;
    float taxed = (taxable*tax_rate)/100;
    float take_home_value = post_NI_deduction - taxed;


    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n",NI_deduction);
    printf("Tax contribution £%.2f\n",taxed);
    printf("Take home salary £%.2f\n",take_home_value);

    return 0;
 }