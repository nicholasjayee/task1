#include <stdio.h>
const float tax_rate = 0.10f;
int main()
{
    // Code by Ssekabira Nicholas &copy; 2025
    double price;

    printf("Enter price: ");
    scanf("%lf", &price);

    double total_cost = price + (price * tax_rate);

    printf("Total cost: %.2lf\n", total_cost);
    return 0;
}