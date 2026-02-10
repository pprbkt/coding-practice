// C Program to compute simple interest 

#include <stdio.h>

void main(){
    float principal, rate, time, simple_interest;
    printf("enter the principal amount: ");
    scanf("%f",&principal);
    printf("enter the rate of interest: ");
    scanf("%f",&rate);
    printf("enter the time in years: ");
    scanf("%f",&time);
    simple_interest = (principal * rate * time) / 100;
    printf("simple interest is: %f", simple_interest);
}