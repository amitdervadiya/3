#include <stdio.h>
void main()
{

    float amount, interestrate, time, simple_interest;
    printf("Enter principal amount : ");
    scanf("%f",&amount);
    printf("Enter annual interest rate (in percentage):");
    scanf("%f",&interestrate);
    printf("Enter time (in years):");
    scanf("%f",&time);

    interestrate = interestrate / 100;
    simple_interest = amount;

    for (int i = 0; i < time; i++)
    {
        simple_interest += simple_interest * interestrate;
    }
    printf("Compound Interest: %.2f\n", simple_interest - amount);
}
