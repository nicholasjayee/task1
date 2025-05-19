#include <stdio.h>

const float Tax_Rate = 0.12f;
int main()
{

    // Code by Ssekabira Nicholas &copy; 2025
    // local variable
    double price;
    printf("Enter price: ");
    scanf("%lf", &price);

    double total_price = price + (price * Tax_Rate);

    printf("Total price: %.2lf\n", total_price);
    return 0;
}