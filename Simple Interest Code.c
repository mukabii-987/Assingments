#include <stdio.h>

int main() {
    float principal, time, rate, simple_interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    simple_interest = (principal * time * rate) / 100;

    printf("The Simple Interest is: %.2f\n", simple_interest);

    return 0;
}