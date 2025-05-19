#include <stdio.h>

const float percentage = .12f;
int main()
{
    // Code by Ssekabira Nicholas &copy; 2025
    float price;

    printf("Enter price: ");
    scanf("%f", &price);

    double discounted_price = (float)price * percentage;

    return 0;
}