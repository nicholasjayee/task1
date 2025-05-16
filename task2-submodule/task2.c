#include <stdio.h>
int main()
{
    // Code by Ssekabira Nicholas &copy; 2025
    double principal;
    int time;
    const float rate;

    printf("Enter principal: ");
    scanf("%lf", &principal);

    printf("Enter time: ");
    scanf("%d", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    double simple_interest = (principal * rate * time);

    printf("Simple Interest: %.2lf\n", simple_interest);

    return 0;
}