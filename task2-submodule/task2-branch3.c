#include <stdio.h>
// global constant value
const float percentage = .12f;
int main()
{
    // Code by Ssekabira Nicholas &copy; 2025

    // local variable
    float price;

    printf("Enter price: ");
    scanf("%f", &price);

    double discounted_price = (float)price * percentage;

    printf("Discounted price: %.2lf\n", discounted_price);

    return 0;
}